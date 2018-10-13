using System;

namespace InputAndAssign
{
	class InputAndAssign
	{
		public static void Main (string[] args)
		{
			int num;

			Console.Write("Please enter an integer value: ");
			num = Convert.ToInt32(Console.ReadLine());
			Console.WriteLine("\nThe entered value is {0}",num);
		}
	}
}
