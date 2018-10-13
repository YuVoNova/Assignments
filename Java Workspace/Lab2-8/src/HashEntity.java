public class HashEntity
{
	public int key;
    public int value;

    public HashEntity next;
    
    public HashEntity(int key, int value)
    {
        this.key = key;
        this.value = value;
        this.next = null;
    }
}
