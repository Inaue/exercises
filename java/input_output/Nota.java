package nota;
import java.util.Scanner;

public class Nota
{
	public static void main(String[] args)
	{
		Scanner Entrada = new Scanner(System.in);
		String nomeAluno;
		float nota1, nota2, nota3, media;

		System.out.println("Digite o nome do aluno:");
		nomeAluno = Entrada.next();
		System.out.println("Digite a 1 nota do aluno:");
		nota1 = Entrada.nextFloat();
		System.out.println("Digite a 2 nota do aluno:");
		nota2 = Entrada.nextFloat();
		System.out.println("Digite a 3 nota do aluno:");
		nota3 = Entrada.nextFloat();
		media = (nota1 + nota2 + nota3) / 3;
		System.out.printf("A media de %s e %.2f\n", nomeAluno, media);
	}
}
