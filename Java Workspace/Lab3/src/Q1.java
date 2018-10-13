import java.util.Scanner;

public class Q1
{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		
		double[] x = {1,2};
		double[] y = {3,4};
		
		double a, b;
		
		a = ((Sum(y) * SumSquare(x)) - (Sum(x) * Sum(x,y))) / ((x.length * SumSquare(x) - Math.pow(Sum(x), 2)));
		b = ((x.length * Sum(x,y)) - (Sum(x) * Sum(y))) / ((x.length * SumSquare(x)) - Math.pow(Sum(x), 2));
		
		System.out.println("A: " + a + " | B: " + b);
	}
	
	public static double Sum(double[] array)
	{
		double sum = 0;
		
		for (int i=0; i<array.length; i++)
		{
			sum += array[i];
		}
		
		return sum;
	}
	
	public static double Sum(double[] array1, double[] array2)
	{
		double sum = 0;
		
		for (int i=0; i<array1.length; i++)
		{
			sum += (array1[i] * array2[i]);
		}
		
		return sum;
	}
	
	public static double SumSquare(double[] array)
	{
		double sum = 0;
		
		for (int i=0; i<array.length; i++)
		{
			sum += Math.pow(array[i], 2);
		}
		
		return sum;
	}
}
