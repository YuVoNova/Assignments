using System;

namespace RelationalOperators
{
	class RelationalOperators
	{
		private static bool IsLarger (int n1, int n2)
		{
			if (n1 > n2)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		
		private static bool IsEqual (int n1, int n2)
		{
			if (n1 == n2)
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		static void Main (string[] args)
		{
			int num1, num2;
			bool check;

			Console.Write ("Please enter first number: ");
			num1 = Convert.ToInt32 (Console.ReadLine());

			Console.Write ("Please enter second number: ");
			num2 = Convert.ToInt32 (Console.ReadLine());

			check = IsEqual (num1, num2);
			if (check == true) Console.WriteLine ("\nFirst is equal to second");
			else Console.WriteLine ("\nFirst is not equal to second");

			if (check != true)
			{
				check = IsLarger (num1, num2);
				if (check == true) Console.WriteLine ("First is greater than second");
				else Console.WriteLine ("First is smaller than second");
			}
		}
	}
}