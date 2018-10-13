using System;

namespace TypeConversion
{
	class ExplicitConversion
	{
		static void Main (string[] args)
		{
			double d = 123.456;
			int i;

			i = (int) d;

			Console.WriteLine (i);
			Console.WriteLine (d);
			Console.ReadLine ();
		}
	}
}