public class MyDeque<T>
{
	private Node<T> head;
	private Node<T> tail;
	
	public MyDeque()
	{
		head = null;
		tail = null;
	}
	
	public void push(T element)
	{
		Node<T> newPtr = new Node<T>(element, null, null);
		
		if (isEmpty())
		{
			head = newPtr;
			
			tail = null;
		}
		else
		{
			Node<T> prevHead = head;
			Node<T> newHead = newPtr;
			
			newHead.setNext(prevHead);
			prevHead.setPrev(newHead);
			head = newHead;
			
			if (tail == null)
			{
				tail = head.getNext();
			}
		}
	}
	
	public T pop()
	{
		if (!isEmpty())
		{
			Node<T> nextPtr = head.getNext();
			
			T popped = head.getData();
			
			if (nextPtr != null)
			{
				nextPtr.setPrev(null);
			}
			
			head = null;
			head = nextPtr;
			
			return popped;
		}
		
		return null;
	}
	
	public void inject(T element)
	{
		Node<T> newPtr = new Node<T>(element, null, null);
		
		if (isEmpty())
		{
			head = newPtr;
			
			tail = null;
		}
		else
		{
			if (tail == null)
			{
				tail = newPtr;
				
				head.setNext(tail);
				tail.setPrev(head);
			}
			else
			{
				Node<T> prevTail = tail;
				Node<T> newTail = newPtr;
				
				newTail.setPrev(prevTail);
				prevTail.setNext(newTail);
				tail = newTail;
			}
		}
	}
	
	public T eject()
	{
		T ejected = null;
		
		if (!isEmpty())
		{
			if (tail != null)
			{
				Node<T> newTail = tail.getPrev();
				
				ejected = tail.getData();
				tail = null;
				newTail.setNext(null);
				tail = newTail;
				
				if (tail.getPrev() == null)
				{
					head = tail;
					tail = null;
				}
			}
			else
			{
				ejected = head.getData();
				head = null;
			}
		}
		
		return ejected;
	}
	
	public boolean isEmpty()
	{
		return head == null;
	}
	
	@Override
	public String toString()
	{
		String s = "";
		
		if (!isEmpty())
		{
			Node<T> currentPtr = head;
			
			while (currentPtr != null)
			{
				s += currentPtr.getData() + " ";
				currentPtr = currentPtr.getNext();
			}
		}
		
		return s;
	}
	
	public Node getHead()						{ return head; }
	public Node getTail()						{ return tail; }
}






