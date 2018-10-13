import java.util.Scanner;

public class Q2
{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		
		String name1, name2, name3, first, second, third;
		
		boolean found = false;
		
		System.out.print("Enter first name: ");
		name1 = input.nextLine();
		
		System.out.print("\nEnter second name: ");
		name2 = input.nextLine();
		
		System.out.print("\nEnter third name: ");
		name3 = input.nextLine();
		
		//Very simple sort algorithm to acquire a sorted form of strings with 3 if statements.
		//Since the program is sorting strings letter by letter, if's are nested in while loops.
		first = name1;
		second = name2;
		third = name3;
		
		//Loops are pre-incremented so the index starts with -1.
		//Bool "found" checks if the sort has been completed to prevent further logic errors.
		int i = -1;
		while (!found && i+1 < first.length() && i+1 < second.length())
		{
			i++;
			
			if (Character.toLowerCase(first.charAt(i)) < Character.toLowerCase(second.charAt(i)))
			{
				found = true;
			}
			else if (Character.toLowerCase(first.charAt(i)) > Character.toLowerCase(second.charAt(i)))
			{
				//Simple swap algorithm.
				String temp = first;
				first = second;
				second = temp;;
				found = true;
			}
			else
			{
				continue;
			}
		}
		
		found = false;
		i = -1;
		while (!found && i+1 < third.length() && i+1 < second.length())
		{
			i++;
			
			if (Character.toLowerCase(second.charAt(i)) < Character.toLowerCase(name3.charAt(i)))
			{
				found = true;
			}
			else if (Character.toLowerCase(second.charAt(i)) > Character.toLowerCase(name3.charAt(i)))
			{
				String temp = second;
				second = third;
				third = temp;;
				found = true;
			}
			else
			{
				continue;
			}
		}
		
		found = false;
		i = -1;
		while (!found && i+1 < first.length() && i+1 < second.length())
		{
			i++;
			
			if (Character.toLowerCase(first.charAt(i)) < Character.toLowerCase(second.charAt(i)))
			{
				found = true;
			}
			else if (Character.toLowerCase(first.charAt(i)) > Character.toLowerCase(second.charAt(i)))
			{
				String temp = first;
				first = second;
				second = temp;;
				found = true;
			}
			else
			{
				continue;
			}
		}
		
		System.out.println("\nThe names in alphabetical order: " + first + ", " + second + ", " + third);
	}
}
