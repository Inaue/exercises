package envenorodd;

import java.util.Scanner;

public class Even_or_Odd
{
	public static void main(String[] args)
	{
		Scanner entrada = new Scanner(System.in);
		int numero;

		System.out.println("Digite um numero inteiro:");
		numero = entrada.nextInt();

		if(numero % 2 == 0)
			System.out.println("O numero e par.");
		else
			System.out.println("O numero e impar.");

	}
}
