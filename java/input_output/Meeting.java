package meeting;

import java.util.Scanner;

public class Meeting
{
	public static void main(String[] args)
	{
		Scanner Entrada = new Scanner(System.in);
		String nome;
		int idade;
		char genero;

		System.out.println("Digite seu nome:");
		nome = Entrada.nextLine();
		System.out.println("Digite sua idade:");
		idade = Entrada.nextInt();
		System.out.println("Digite seu genero [m/f]:");
		genero = Entrada.next().charAt(0);
		System.out.printf("Nome: %s\n", nome);
		System.out.printf("Idade: %d\n", idade);
		System.out.printf("Genero: %c\n", genero);
	}
}
