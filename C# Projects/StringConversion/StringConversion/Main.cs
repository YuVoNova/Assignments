using System;

namespace StringConversion
{
	class StringConversion
	{
		static void Main (string[] args)
		{
			int i = 105;
			long l = 105105105105;
			float f = 105.5f;
			double d = 105.501;
			bool b = true;

			Console.WriteLine (i.ToString());
			Console.WriteLine (l.ToString());
			Console.WriteLine (f.ToString());
			Console.WriteLine (d.ToString());
			Console.WriteLine (b.ToString());
		}
	}
}