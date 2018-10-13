import java.util.Arrays;

public class Q1
{
	public static void main(String[] args)
	{
		final int Q = 1000, LIM = 1000;
		int[] numbers = new int[Q];
		int max = 0;
		
		for (int i = 0; i < Q; i++)
		{
			numbers[i] = (int)(Math.random() * LIM);
		}
		
		for (int i = 0; i < Q; i++)
		{
			if (numbers[i] > max)
			{
				max = numbers[i];
			}
		}
		
		for (int div = 1; max/div > 0; div *= 10)
		{
			Sort(numbers, Q, div);
		}
		
		for (int i = 0; i < Q; i++)
		{
			System.out.println(numbers[i]);
		}
	}
	
	public static void Sort(int[] a, int lim, int div)
	{
		int[] out = new int[lim], count = new int[10];
		int k;
		
		Arrays.fill(count, 0);
		
		for (k = 0; k < lim; k++)
		{
			count[(a[k]/div) % 10]++;
		}
		
		for (k = 1; k < 10; k++)
		{
			count[k] += count[k - 1];
		}
		
		for (k = lim - 1; k >= 0; k--)
		{
			out[count[(a[k]/div) % 10] - 1] = a[k];
			count[(a[k]/div) % 10]--;
		}
		
		for (k = 0; k < lim; k++)
		{
			a[k] = out[k];
		}
	}
}
