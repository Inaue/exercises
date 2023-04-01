#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define TRUE		(1 == 1)
#define FALSE		!TRUE
#define TAGS_MAX_CHR	(15 + 1)
#define TAGS_MAX_QT	10

/**
 * @author Inaue
 * @brief sass --> html
 */

void tab(int ind, FILE* f)
{
	int i;

	ind /= 2;

	for(i = 0; i < ind; i++)
		fputc('\t', f);
}

int main(int argc, char** argv)
{
	char c, tags[TAGS_MAX_QT][TAGS_MAX_CHR];
	int content = TRUE, i, tags_qt = 0, indent, tags_ind[TAGS_MAX_QT]; 
	FILE* sass = fopen(argv[1], "r"); 
	FILE* html = fopen(argv[2], "w"); 

	while(TRUE)
	{
		c = getc(sass);

		if(c == EOF)
			break;
		if(isalpha(c))
		{
			ungetc(c, sass);

			while(tags_qt > 0 && indent <= tags_ind[tags_qt-1])
			{
				if(content)
				{
					tab(tags_ind[tags_qt-1]+2, html);
					fprintf(html, "<!-- CONTEUDO -->\n");
					content = FALSE;
				}

				tab(tags_ind[tags_qt-1], html);
				fprintf(html, "</%s>\n", tags[--tags_qt]);
			}

			tab(indent, html);
			fgets(tags[tags_qt], TAGS_MAX_CHR, sass);
			tags[tags_qt][strlen(tags[tags_qt])-1] = '\0';
			fprintf(html, "<%s>\n", tags[tags_qt]);
			tags_ind[tags_qt++] = indent;
			indent = 0;
			content = TRUE;
		}
		else if(c == ' ')
			indent++;
	}

	while(tags_qt-- > 0)
	{
		if(content)
		{
			tab(tags_ind[tags_qt]+2, html);
			fprintf(html, "<!-- CONTEUDO -->\n");
			content = FALSE;
		}

		tab(tags_ind[tags_qt], html);
		fprintf(html, "</%s>\n", tags[tags_qt]);
	}

	fclose(sass); 
	fclose(html); 

	return 0; 
}
