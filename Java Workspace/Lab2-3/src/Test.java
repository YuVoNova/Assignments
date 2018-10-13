import java.util.*;

public class Test
{
	public static void main(String[] args)
	{
		LinkedList list = new LinkedList();
		
		Scanner input = new Scanner(System.in);
		
		int select = -1;
		
		int data, d1, d2;
		boolean isEmpty;
		Node d;
		
		while (select != 0)
		{
			DisplayMenu();
			
			select = input.nextInt();
			
			switch (select)
			{
				case 0:
					break;
				case 1:
					System.out.println("Data: ");
					data = input.nextInt();
					list.AddFirst(data);
					break;
				case 2:
					System.out.println("Data: ");
					data = input.nextInt();
					list.AddLast(data);
					break;
				case 3:
					isEmpty = list.IsEmpty();
					System.out.println(isEmpty);
					break;
				case 4:
					d = list.DeleteFirst();
					if (d == null)
					{
						System.out.println("\nLIST IS EMPTY!");
					}
					break;
				case 5:
					d = list.DeleteLast();
					if (d == null)
					{
						System.out.println("\nLIST IS EMPTY!");
					}
					break;
				case 6:
					list.PrintList();
					break;
				case 7:
					System.out.println("Data 1: ");
					d1 = input.nextInt();
					System.out.println("Data 2: ");
					d2 = input.nextInt();
					list.SwapNodes(d1, d2);
					break;
				default:
					break;
			}
		}
	}
	
	public static void DisplayMenu()
	{
		System.out.println("1) ADD FIRST\n2) ADD LAST\n3) IS EMPTY\n4) DELETE FIRST\n5) DELETE LAST\n6) PRINT LIST\n7) SWAP NODES\n0) EXIT");
	}
}
