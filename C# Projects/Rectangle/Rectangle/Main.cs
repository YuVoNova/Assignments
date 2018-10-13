using System;

namespace RectangleApp

{
	class Rectangle
	{
		int length;
		int width;

		public void Details ()
		{
			length = 5;
			width = 3;
		}

		public int GetArea ()
		{
			return length * width;
		}

		public void Display()
		{
			Console.WriteLine ("Length = {0}", length);
			Console.WriteLine ("Width = {0}", width);
			Console.WriteLine ("Area = {0}", GetArea ());
		}
	}

	class ExecuteRectangle
	{
		static void Main(string[] args)
		{
			Rectangle r = new Rectangle ();
			r.Details ();
			r.Display ();
			Console.ReadLine ();
		}
	}
}