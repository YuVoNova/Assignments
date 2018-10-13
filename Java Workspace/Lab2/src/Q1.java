import java.util.Scanner;

public class Q1
{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		
		int n;
		String takenName;
		
		System.out.println("Enter a name: ");
		takenName = input.nextLine();
		
		System.out.println("Enter the index: ");
		n = input.nextInt();
		
		if (takenName.length() > n - 1)
		{
			char c = takenName.charAt(n - 1);
			//System.out.println(takenName.substring(0, n - 1));
			
			if (Character.isUpperCase(c))
			{
				c = Character.toLowerCase(c);
			}
			else
			{
				c = Character.toUpperCase(c);
			}
			
			String newName = takenName.substring(0, n - 1) + c + takenName.substring(n, takenName.length());
			
			System.out.println("Before: " + takenName + "\nAfter: " + newName);
		}
		else
		{
			System.out.println("ERROR: Out of index range.");
		}
	}
}
