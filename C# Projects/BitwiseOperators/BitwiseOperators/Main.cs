using System;

namespace BitwiseOperators
{
	class MainClass
	{
		public static void Main (string[] args)
		{
			int a = 60, b = 13, c = 0;

			c = a & b;
			Console.WriteLine ("A & B = {0}", c);
			c = a | b;
			Console.WriteLine ("A | B = {0}", c);
			c = a ^ b;
			Console.WriteLine ("A ^ B = {0}", c);
			c = ~a;
			Console.WriteLine ("~A = {0}", c);
			c = a << 2;
			Console.WriteLine ("A << 2 = {0}", c);
			c = a >> 2;
			Console.WriteLine ("A >> 2 = {0}", c);
		}
	}
}
