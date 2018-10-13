public class List implements Stack
{
	public Node head;
	
	public int size;
	
	public List()
	{
		head = null;
		size = 0;
	}
	
	@Override
	public void Push(Object data)
	{
		Node newPtr = new Node(data, null);
		
		newPtr.setNext(head);
		head = newPtr;
		
		size++;
	}

	@Override
	public Object Pop()
	{
		if (!IsEmpty())
		{
			Node popPtr = head;
			
			Object poppedObj = popPtr.getData();
			
			head = head.getNext();
			
			popPtr.setNext(null);
			
			size--;
			
			return poppedObj;
		}
		else
		{
			System.out.println("Stack is empty.\n");
			
			return null;
		}
	}

	@Override
	public boolean IsEmpty()
	{
		return head == null;
	}

	@Override
	public int Size()
	{
		return size;
	}

	@Override
	public void Display()
	{
		Node currentPtr = head;
		
		if (currentPtr != null)
		{
			System.out.print("Stack: ");
			
			do
			{
				System.out.print(currentPtr.getData());
				currentPtr = currentPtr.getNext();
			}
			while (currentPtr != null);
			
			System.out.println("\n");
		}
		else
		{
			System.out.println("Stack is empty.\n");
		}
	}
}
