using System;

namespace DataTypeSize

{
	class ShowSizes
	{
		public static void Main (string[] args)
		{
			Console.WriteLine ("Size of int = {0}", sizeof(int));
			Console.WriteLine ("Size of char = {0}", sizeof(char));
			Console.WriteLine ("Size of long = {0}", sizeof(long));
			Console.WriteLine ("Size of bool = {0}", sizeof(bool));
			Console.ReadLine ();
		}
	}
}
