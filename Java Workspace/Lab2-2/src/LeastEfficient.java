import java.util.*;

public class LeastEfficient
{
	public static final int NUM = 1000;
	
	public static void main(String[] args)
	{
		int[] array = new int[NUM];
		Random rand = new Random();
		int target = rand.nextInt(NUM);
		int index = -1;
		
		System.out.println("Target: " + target);
		
		for (int i = 0; i < NUM; i++)
		{
			array[i] = rand.nextInt(NUM);
		}
		
		for (int i = 0; i < NUM; i++)
		{
			 System.out.println(i + ": " + array[i]);
		}
		
		long time;
		long start = System.nanoTime();
		
		index = Func(array, target);
		
		long finish = System.nanoTime();
		time = finish - start;
		
		System.out.println("Function terminated in " + time + " nanoseconds");
		
		if (index != -1)
		{
			System.out.println("Index of target " + target + " is " + index);
		}
		else
		{
			System.out.println("Target not found");
		}
	}
	
	public static int Func(int[] array, int target)
	{
		int result = -1;
		
		for (int i = 0; i < NUM; i++)
		{
			if (array[i] == target)
			{
				result = i;
			}
		}
		
		return result;
	}
}
