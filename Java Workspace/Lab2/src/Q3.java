import java.util.Scanner;

public class Q3
{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		
		int num = -1, numOfInputs = 0;
		double sum = 0;
		boolean error = false;
		
		System.out.println("Enter some integers (0 to terminate):");
		
		//Taking input until an error occurs or user enters 0.
		while (num != 0)
		{
			if (input.hasNextInt())
			{
				num = input.nextInt();
				sum += num;
				numOfInputs++;
			}
			//The error exception if the user enters a wrong input.
			else
			{
				error = true;
				break;
			}
		}
		
		//Checking if loop has been terminated by an input 0 or an error.
		if (error)
		{
			System.out.println("Please only enter integers.");
		}
		else
		{
			System.out.println("\nTotal = " + (int) sum);
			System.out.println("\nAverage = " + (sum / (numOfInputs == 1 ? numOfInputs : numOfInputs-1)));
		}
	}
}
