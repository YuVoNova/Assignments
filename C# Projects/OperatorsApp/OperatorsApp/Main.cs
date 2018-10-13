using System;

namespace OperatorsApp
{
	class OpApp
	{
		static void Main (string[] args)
		{
			int a = 21, b = 10, c;

			c = a + b;
			Console.WriteLine ("a + b = {0}", c);
			c = a - b;
			Console.WriteLine ("a - b = {0}", c);
			c = a * b;
			Console.WriteLine ("a * b = {0}", c);
			c = a / b;
			Console.WriteLine ("a / b = {0}", c);
			c = a % b;
			Console.WriteLine ("a % b = {0}", c);
			Console.WriteLine ("a = {0}", a);
			Console.WriteLine ("a++ = {0}", a++);
			Console.WriteLine ("a = {0}", a);
			Console.WriteLine ("--a = {0}", --a);
			Console.WriteLine ("a = {0}", a);
		}
	}
}
