using System;

namespace LogicalOperators
{
	class LogicalOperators
	{
		public static void Main (string[] args)
		{
			bool a;
			bool b;

			a = true; b = true;

			if (a&&b)
				Console.WriteLine ("A && B is true");

			if (a||b)
				Console.WriteLine ("A || B is true");

			a = false; b = true;

			if (a&&b)
				Console.WriteLine ("A && B istrue");
			else
				Console.WriteLine ("A && B is not true");
			if (!(a&&b))
				Console.WriteLine ("!(A && B) is true");
		}
	}
}
