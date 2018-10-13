public class LinkedList
{
	private Node head;
	
	public int size;
	
	public LinkedList()
	{
		head = new Node(0, null);
		size = 0;
	}
	
	public boolean IsEmpty()
	{
		return head.getNext() == null;
	}
	
	public void AddFirst(int data)
	{
		Node newPtr = new Node(data, null);
		
		if (head.getNext() == null)
		{
			head.setNext(newPtr);
		}
		else
		{
			newPtr.setNext(head.getNext());
			head.setNext(newPtr);
		}
		
		size++;
	}
	
	public void AddLast(int data)
	{
		Node newPtr = new Node(data, null);
		
		if (head.getNext() == null)
		{
			head.setNext(newPtr);
		}
		else
		{
			Node currentPtr = head.getNext();
			
			while (currentPtr.getNext() != null)
			{
				currentPtr = currentPtr.getNext();
			}
			
			currentPtr.setNext(newPtr);
		}
		
		size++;
	}
	
	public Node DeleteFirst()
	{
		Node deletedNode = null;
		
		if (head.getNext() == null)
		{
			return deletedNode;
		}
		else
		{
			deletedNode = head.getNext();
			deletedNode.setNext(null);
			head.setNext(head.getNext());
		}
		
		size--;
		
		return deletedNode;
	}
	
	public Node DeleteLast()
	{
		Node deletedNode = null;
		
		if (head.getNext() == null)
		{
			return deletedNode;
		}
		else
		{
			Node previousPtr;
			Node lastPtr;
			Node currentPtr = head.getNext();
			
			while (currentPtr.getNext().getNext() != null)
			{
				currentPtr.setNext(currentPtr.getNext());
			}
			
			previousPtr = currentPtr;
			lastPtr = previousPtr.getNext();
			
			previousPtr.setNext(null);
			deletedNode = lastPtr;
		}
		
		size--;
		
		return deletedNode;
	}
	
	public void PrintList()
	{
		if (head.getNext() == null)
		{
			System.out.print("\nLINKED LIST IS EMPTY!\n");
		}
		else
		{
			System.out.print("\nLINKED LIST ELEMENTS:\n");
			
			Node currentPtr = head.getNext();
			int index = 0;
			
			while (currentPtr != null)
			{
				System.out.print(index + ". Element: " + currentPtr.getData() + "\n");
				currentPtr = currentPtr.getNext();
				index++;
			}
			
			System.out.print("\nLIST SIZE: " + size + "\n");
		}
	}
	
	public void SwapNodes(int d1, int d2)
	{
		if (head.getNext() == null)
		{
			System.out.print("\nLINKED LIST IS EMPTY!\n");
		}
		else
		{
			Node n1 = null, n2 = null, p1 = null, p2 = null;
			
			Node currentPtr1 = head.getNext();
			
			if (head.getNext().getData() == d1)
			{
				n1 = head.getNext();
			}
			else
			{
				while (currentPtr1.getNext() != null)
				{
					currentPtr1.setNext(currentPtr1.getNext());
					
					if (currentPtr1.getNext().getData() == d1)
					{
						p1 = currentPtr1;
						n1 = currentPtr1.getNext();
						break;
					}
				}
			}
			
			Node currentPtr2 = head.getNext();
			
			if (head.getNext().getData() == d2)
			{
				n2 = head.getNext();
			}
			else
			{
				while (currentPtr2.getNext() != null)
				{
					System.out.println(d2);
					currentPtr2.setNext(currentPtr2.getNext());
					
					if (currentPtr2.getNext().getData() == d2)
					{
						p2 = currentPtr2;
						n2 = currentPtr2.getNext();
						break;
					}
				}
			}
			
			if (n1 == null || n2 == null)
			{
				System.out.print("\nDEMANDED DATA WAS NOT FOUND!\n");
			}
			else
			{
				Node temp;
				
				temp = p1.getNext();
				p1.setNext(p2.getNext());
				p2.setNext(temp);
				
				temp = n1.getNext();
				n1.setNext(n2.getNext());
				n2.setNext(temp);
				
				System.out.print("\nSWAP PROCESS WAS SUCCESSFUL.\n");
			}
		}
	}
}
