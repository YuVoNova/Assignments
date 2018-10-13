import java.util.NoSuchElementException;

public class HashMap
{
    public int SIZE_OF_TABLE = 128;
    public HashEntity[] table;
    
    public HashMap()
    {
        table = new HashEntity[SIZE_OF_TABLE];
        
        for (int i = 0; i < SIZE_OF_TABLE; i++)
        {
            table[i] = null;
        }
    }

    public void put(int key, int value)
    {
        int index = hashCodeNew(key);
        
        System.out.println(index);
        
        HashEntity hashEntity = new HashEntity(key, value);
        
        if (table[index] == null)
        {
            table[index] = hashEntity;
        }
        else
        {
            HashEntity runner = table[index];
            
            while (runner.next != null)
            {
                if (runner.key == hashEntity.key)
                {
                    runner.value = hashEntity.value;
                    break;
                }
                else
                {
                    runner = runner.next;
                }
            }
            if (runner.next == null)
            {
                if (runner.key == hashEntity.key)
                {
                    runner.value = hashEntity.value;
                }
                else
                {
                    runner.next = hashEntity;
                }
            }
        }

    }

    public int get(int key)
    {
        int index = hashCodeNew(key);
        
        if (table[index] == null)
        {
            return -1;
        }
        else
        {
            HashEntity runner = table[index];
            if (runner.key == key) {
                return runner.value;
            }
            while (runner.next != null) {
                if (runner.key == key) {
                    return runner.value;
                }
            }
            return -1;
        }
    }

    public int hashCodeNew(int h)
    {
        h ^= (h >>> 20) ^ (h >>> 12);
        int hashCode = h ^ (h >>> 7) ^ (h >>> 4);
        return hashCode % SIZE_OF_TABLE;
    }
}