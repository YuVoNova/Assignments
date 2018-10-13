import java.util.Random;

public class Q1
{
	public static int primeNum = 0;
	
	public static void main(String[] args)
	{
		int numCount = 1000, limit = 1000000;
		int[] numbers = GenerateRandom(numCount, limit);
		
		System.out.println("Prime number count in random numbers: " + primeNum + " | Non-prime number count in random numbers: " + (numCount - primeNum));
	}
	
	public static int[] GenerateRandom(int numCount, int limit)
	{
		int[] n = new int[numCount];
		boolean isPrime;
		
		Random rand = new Random();
		
		for (int i = 0; i < numCount; i++)
		{
			isPrime = true;
			n[i] = rand.nextInt(limit) + 1;
			System.out.println(n[i]);
			
			for (int j = 2; j < n[i]; j++)
			{
				if (n[i] % j == 0)
				{
					isPrime = false;
					break;
				}
			}
			
			if (isPrime && n[i] != 1)
			{
				primeNum++;
			}
		}
		
		return n;
	}
}
