public class Test
{
    public static void main(String[] args)
    {
        int[] a = new int[] {};
        
        MaximumBinaryHeap maxBinHeap = new MaximumBinaryHeap(a);
        
        maxBinHeap.Insert(6);
        maxBinHeap.Insert(8);
        maxBinHeap.Insert(4);
        maxBinHeap.Insert(7);
        maxBinHeap.Insert(2);
        maxBinHeap.Insert(3);
        maxBinHeap.Insert(9);
        maxBinHeap.Insert(1);
        maxBinHeap.Insert(5);
        
        maxBinHeap.DisplayHeap();
        
        int deleted;
        
        deleted = maxBinHeap.DeleteMax();
        
        System.out.println("Deleted: " + deleted);
        
        maxBinHeap.DisplayHeap();
    }
}
