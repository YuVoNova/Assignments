public class Tester
{
	public static void main(String[] args)
	{
		List stack = new List();
		
		Object deletedObj;
		
		deletedObj = stack.Pop();
		
		stack.Push(0);
		stack.Push(1);
		stack.Push(2);
		
		stack.Display();
		
		deletedObj = stack.Pop();
		System.out.println("Popped " + deletedObj.toString() + "\n");
		
		deletedObj = stack.Pop();
		System.out.println("Popped " + deletedObj.toString() + "\n");
		
		stack.Display();
		
		deletedObj = stack.Pop();
		System.out.println("Popped " + deletedObj.toString() + "\n");
		
		stack.Display();
		
		String reversed = "", normal = "Yusuf Metindoðan!";
		char[] letters = normal.toCharArray();
		
		for (int i = 0; i < letters.length; i++)
		{
			stack.Push(letters[i]);
		}
		
		System.out.println("=== Reversed String After Push ===");
		System.out.println("Normal String: " + normal);
		stack.Display();
		
		/*
		for (int i = 0; i < letters.length; i++)
		{
			reversed += stack.Pop() + "";
		}
		
		System.out.println("\n=== Normal String After Pop ===");
		System.out.println("String: " + reversed);
		stack.Display();
		*/
	}
}
