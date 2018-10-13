import java.util.Arrays;

public class MaximumBinaryHeap
{
    int[] heap;
    int size;
    
    public MaximumBinaryHeap(int[] heap)
    {
        this.size = heap.length;
        this.heap = Arrays.copyOf(heap, size);
    }
    
    public void MaxHeapify(int index)
    {
        int largest = index;
        int leftIndex = 2 * index + 1;
        int rightIndex = 2 * index + 2;

        if (leftIndex < size && heap[index] < heap[leftIndex])
        {
            largest = leftIndex;
        }
        
        if (rightIndex < size && heap[largest] < heap[rightIndex])
        {
            largest = rightIndex;
        }

        if (largest != index)
        {
            Swap(index, largest);
            MaxHeapify(largest);
        }
    }
    
    public void Insert(int element)
    {
        heap = Arrays.copyOf(heap, size + 1);
        
        int i = size;
        
        int parentIndex = (int) Math.floor((i - 1) / 2);
        
        while (i > 0 && element > heap[parentIndex])
        {
            heap[i] = heap[parentIndex];
            i = parentIndex;
            parentIndex = (int) Math.floor((i - 1) / 2);
        }
        
        heap[i] = element;
        size++;
    }

    public int DeleteMax()
    {
        if (size == 0)
        {
        	return -1;
        }

        int min = heap[0];
        heap[0] = heap[size - 1];
        size--;
        MaxHeapify(0);
        
        return min;
    }

    public void DisplayHeap()
    {
        if (heap == null)
        {
            System.out.print("Heap is empty.");
        }
        else
        {
        	int i, iMax = size - 1;
        	
            if (iMax == -1)
            {
                System.out.print("[]");
            }
            
            StringBuilder b = new StringBuilder();
            b.append('[');
            
            for (i = 0; i < iMax; i++)
            {
                b.append(heap[i]);
                b.append(", ");
            }
            
            System.out.println(b.append(heap[i]).append(']').toString());
        }
    }

    private void Swap(int firstIndex, int secondIndex)
    {
        int temp = heap[firstIndex];
        heap[firstIndex] = heap[secondIndex];
        heap[secondIndex] = temp;
    }
}