public class Node<T>
{
	private T data;
	private Node prev;
	private Node next;
	
	public Node()
	{
		data = null;
		prev = null;
		next = null;
	}
	public Node(T data, Node prev, Node next)
	{
		this.data = data;
		this.prev = prev;
		this.next = next;
	}

	public void setData(T data)				{ this.data = data; }
	public void setPrev(Node prev)			{ this.prev = prev; }
	public void setNext(Node next)			{ this.next = next; }
	
	public T getData()						{ return data; }
	public Node getPrev()					{ return prev; }
	public Node getNext()					{ return next; }
}
