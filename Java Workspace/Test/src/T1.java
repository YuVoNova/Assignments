import java.util.Stack;

class T1
{
	public static void main(String[] args)
	{
		/*String x = "Java", y = "Java";
		
		Stack stack = new Stack();
		
		System.out.println(stack.isEmpty());
		System.out.println(stack.size());
		
		stack.push(x);
		stack.push(y);
		
		System.out.println(stack.isEmpty());
		System.out.println(stack.size());
		
		stack.pop();
		
		System.out.println(stack.isEmpty());
		System.out.println(stack.size());*/
		
		Object a = new A();
		B b = new B();
		Object c = new C();
		
		b.Func(5);
		
		if (b.equals(c))
		{
			System.out.println("B equals C");
		}
		
		Demo((A) b);
	}
	
	public static void Demo(A obj)
	{
		obj.ABC(10.0);
		
	}
}
		
class A
{
	private int a;
	
	public A()
	{
		
	}
	
	public void ABC(double i)
	{
		System.out.println(i);
	}
}

class B extends A implements D1
{	
	private int b;
	
	public B()
	{
		b = 0;
	}
	
	public void ABC(double i)
	{
		System.out.println(i * 2);
	}
	
	public void BF()
	{
		
	}

	@Override
	public void Func(int n)
	{
		System.out.println(D1.K + n);
	}
}

class C extends A 
{
	private String c;
	
	public C()
	{
		c = "ABC";
	}
	
	public void CF()
	{
		
	}
	
	public void ABC(double i)
	{
		System.out.println(i * 3);
	}
}



















