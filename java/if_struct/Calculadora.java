package calculadora;

import java.util.Scanner;

public class Calculadora
{
	public static void main(String[] args)
	{
		Scanner Entrada = new Scanner(System.in);
		float operando1, operando2;
		char operacao;

		System.out.println("Digite uma conta:");
		operando1 = Entrada.nextFloat();
		operacao = Entrada.next().charAt(0);
		operando2 = Entrada.nextFloat();

		switch(operacao)
		{
		case '+':
			System.out.printf("%.3f %c %.3f  = %.3f\n", operando1, operacao, operando2, operando1 + operando2);
			break;
		case '-':
			System.out.printf("%.3f %c %.3f  = %.3f\n", operando1, operacao, operando2, operando1 - operando2);
			break;
		case '*':
			System.out.printf("%.3f %c %.3f  = %.3f\n", operando1, operacao, operando2, operando1 * operando2);
			break;
		case '/':
			System.out.printf("%.3f %c %.3f  = %.3f\n", operando1, operacao, operando2, operando1 / operando2);
			break;
		default:
			break;
		}
	}
}
