using System;

namespace DeclaringConstants
{
	class DecCon
	{
		static void Main (string[] args)
		{
			double r, area;
			const double PI = 3.14159;

			Console.Write ("Please enter the radius of circle: ");
			r = Convert.ToDouble (Console.ReadLine ());
			area = r * r * PI;
			Console.WriteLine ("\nRadius = {0}, Area = {1}\n",r,area);
		}
	}
}
