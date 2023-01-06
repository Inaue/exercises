package greatest;

public class Greatest
{
	public static void main(String[] args)
	{
		int num1 = Integer.parseInt(args[0]);
		int num2 = Integer.parseInt(args[1]);

		if(num1 > num2)
			System.out.println("O 1 numero e maior que o 2 numero.");
		else if(num1 == num2)
			System.out.println("O 1 numero e igual ao 2 numero.");
		else
			System.out.println("O 2 numero e maior que o 1 numero.");
	}
}
