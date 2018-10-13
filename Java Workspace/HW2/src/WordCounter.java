import java.io.*;
import java.util.*;

public class WordCounter
{
	public static void main(String[] args) throws FileNotFoundException
	{
		HashMap<String, Integer> map = new HashMap<String, Integer>();
		
		Scanner textFile = new Scanner(new File("C:\\Documents\\EclipseWS\\HW2\\src\\totc.txt"));
		
		while (textFile.hasNext())
		{
			String currentWord = textFile.next();
			currentWord = currentWord.toLowerCase();
			
			currentWord = currentWord.replaceAll("[^\\w\\s]","");
			
			if (currentWord.equals(""))
			{
				continue;
			}
			
			if (map.containsKey(currentWord))
			{
				map.put(currentWord, map.get(currentWord) + 1);
			}
			else
			{
				map.put(currentWord, 1);
			}
		}
		
		textFile.close();
		
		System.out.println("===============\nA Tale of Two Cities\n===============");
		PrintMap(map);
		
		map.clear();
		
		textFile = new Scanner(new File("C:\\Documents\\EclipseWS\\HW2\\src\\dyssy10.txt"));
		
		while (textFile.hasNext())
		{
			String currentWord = textFile.next();
			currentWord = currentWord.toLowerCase();
			
			currentWord = currentWord.replaceAll("[^\\w\\s]","");
			
			if (currentWord.equals(""))
			{
				continue;
			}
			
			if (map.containsKey(currentWord))
			{
				map.put(currentWord, map.get(currentWord) + 1);
			}
			else
			{
				map.put(currentWord, 1);
			}
		}
		
		textFile.close();
		
		System.out.println("===============\nOdyssey\n===============");
		PrintMap(map);
		
		map.clear();
		
		textFile = new Scanner(new File("C:\\Documents\\EclipseWS\\HW2\\src\\tomsawyer.txt"));
		
		while (textFile.hasNext())
		{
			String currentWord = textFile.next();
			currentWord = currentWord.toLowerCase();
			
			currentWord = currentWord.replaceAll("[^\\w\\s]","");
			
			if (currentWord.equals(""))
			{
				continue;
			}
			
			if (map.containsKey(currentWord))
			{
				map.put(currentWord, map.get(currentWord) + 1);
			}
			else
			{
				map.put(currentWord, 1);
			}
		}
		
		textFile.close();
		
		System.out.println("===============\nTom Sawyer\n===============");
		PrintMap(map);
		
		map.clear();
	}
	
	public static void PrintMap(HashMap<String, Integer> map) throws FileNotFoundException
	{
		ArrayList<String> commonWords = new ArrayList<String>();
		
		Scanner textFile = new Scanner(new File("C:\\Documents\\EclipseWS\\HW2\\src\\commonwords.txt"));
		
		while (textFile.hasNext())
		{
			String currentWord = textFile.next();
			currentWord = currentWord.toLowerCase();
			
			currentWord = currentWord.replaceAll("[^\\w\\s]","");
			
			if (currentWord.equals(""))
			{
				continue;
			}
			
			commonWords.add(currentWord);
		}
		
		textFile.close();
		
	    Iterator it = map.entrySet().iterator();
	    
	    while (it.hasNext())
	    {
	        HashMap.Entry pair = (HashMap.Entry)it.next();
	        
	        if ((int)pair.getValue() >= 100 && commonWords.contains(pair.getKey()))
	        {
	        	System.out.println(pair.getKey() + " = " + pair.getValue());
	        }
	        
	        it.remove();
	    }
	}
}
