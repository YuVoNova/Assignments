import java.util.Scanner;

public class Q2
{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		
		int limit = 9;
		
		for (int i = 1; i <= limit; i++)
		{
			for (int j = 1; j <= limit; j++)
			{
				if (i != j)
				{
					System.out.println(i + "  " + j);
				}
			}
		}
	}
}
