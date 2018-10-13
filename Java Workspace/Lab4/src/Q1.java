import java.util.Scanner;

public class Q1
{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		
		int num, mod, result;
		String number = "";
		String tempNum = "";
		int modifier = 5;
		
		System.out.println("Enter an integer: ");
		num = input.nextInt();
		
		result = num;
		
		while (result >= modifier)
		{
			mod = result % modifier;
			tempNum += mod;
			result /= modifier;
		}
		
		tempNum += result;
		
		for (int i = tempNum.length() - 1; i >= 0; i--)
		{
			number += tempNum.charAt(i);
		}
		
		System.out.println("Number in decimal: " + num + " | Number in modifier: " + number);
	}
}
