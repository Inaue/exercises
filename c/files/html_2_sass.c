#include <stdio.h>
#define SUCCESS         0
#define FILE_N_FOUND    1

/**
 * @author Inaue
 * @brief html --> sass
 */

void tab(int ind, FILE* f)
{
	int i;

	for(i = 0; i < ind; i++)
	{
		fputc(' ', f);
		fputc(' ', f);
	}
}

int main(int argc, char** argv)
{
	char c;
	int i, indent = 0; 
	FILE* html = fopen(argv[1], "r"); 
	FILE* sass = fopen(argv[2], "w"); 

    if(html == NULL)
    {
        printf("ERRO: arquivo de leitura nao encontrado.\n");
        return FILE_N_FOUND;
    }

	while(!feof(html))
	{
		c = fgetc(html); 

		if(c == '\t')
			indent++; 
		else if(c ==  '\n')
			indent = 0; 
		else if(c == '<')
		{
			c = fgetc(html); 

			if(c != '/')
			{
				if(c != '!')
				{
					tab(indent, sass);

					while(c != '>' && c != ' ')
					{
						fputc(c, sass); 
						c = fgetc(html); 
					}

					fputc('\n', sass); 
					tab(++indent, sass);
					fprintf(sass, "/* ESTILO */"); 
					fputc('\n', sass); 
					fputc('\n', sass); 
				}
			}
		}
	}

	fclose(html); 
	fclose(sass); 

	return SUCCESS; 
}