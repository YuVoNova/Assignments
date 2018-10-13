import java.util.Scanner;

public class Q1
{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		
		String name1, name2, control = "", control1 = "", control2 = "";
		float common = 0, diff1 = 0, diff2 = 0;
		float similarity;
		
		boolean found = false;
		
		System.out.print("Enter first name: ");
		name1 = input.nextLine();
		
		System.out.print("\nEnter second name: ");
		name2 = input.nextLine();
		
		for(int i=0; i<name1.length(); i++)
		{
			for (int j=0; j<name2.length(); j++)
			{
				//This condition is to make sure that it works for once depending on the outer loop index.
				//Checking current "name2" letter if it's different in itself.
				if (i == 0)
				{
					if (diff2 != 0)
					{
						for (int k=0; k<diff2; k++) 
						{
							if (name2.charAt(j) == control2.charAt(k))
							{
								found = true;
								break;
							}
						}
						
						if (!found)
						{
							control2 += name2.charAt(j);
							diff2++;
						}
						
						found = false;
					}
					else
					{
						control2 += name2.charAt(j);
						diff2++;
					}
				}
				//Finished checking.
				
				//Checking if the current "name2" letter is same with the current "name1" letter.
				if (name1.charAt(i) == name2.charAt(j))
				{
					if (common != 0)
					{
						for (int k=0; k<common; k++) 
						{
							if (name1.charAt(i) == control.charAt(k))
							{
								found = true;
								break;
							}
						}
						
						if (!found)
						{
							control += name1.charAt(i);
							common++;
						}
						
						found = false;
					}
					else
					{
						control += name1.charAt(i);
						common++;
					}
				}
				//Finished checking.
			}
			
			//Checking current "name1" letter if it's different in itself.
			if (diff1 != 0)
			{
				for (int k=0; k<diff1; k++) 
				{
					if (name1.charAt(i) == control1.charAt(k))
					{
						found = true;
						break;
					}
				}
				
				if (!found)
				{
					control1 += name1.charAt(i);
					diff1++;
				}
				
				found = false;
			}
			else
			{
				control1 += name1.charAt(i);
				diff1++;
			}
			//Finished checking.
		}
		
		//Similarity formula.
		similarity = common / ((diff1 + diff2) / 2);
		
		System.out.println("\nResult: " + similarity);
	}
}
