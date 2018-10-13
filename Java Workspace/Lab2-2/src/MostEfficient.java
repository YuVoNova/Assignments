import java.util.*;

public class MostEfficient
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
		
		Arrays.sort(array);
		
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
		int min = 0, max = NUM - 1, num = NUM / 2;
		
		do
		{
			if (array[num] < target)
			{
				min = num;
			}
			else if (array[num] > target)
			{
				max = num;
			}
			else
			{
				return num;
			}
			
			if (max == min + 1)
			{
				return -1;
			}
			
			num = (min + max) / 2;
		}
		while (true);
	}
}
