public class AVLTree
{
	public TreeNode root;
	
	public AVLTree()
	{
		root = null;
	}
	
	public int Max(int n1, int n2)
	{
		return n1 > n2 ? n1 : n2;
	}
	
	public int Height(TreeNode node)
	{
		return node != null ? node.height : 0;
	}
	
	public void Recalculate(TreeNode node)
	{
		node.height = 1 + Max(Height(node.left), Height(node.right));
	}
	
	public TreeNode RotateRight(TreeNode node)
	{
		TreeNode leftNode = node.left;
		
		node.left = leftNode.right;
		leftNode.right = node;
		
		Recalculate(node);
		Recalculate(leftNode);
		
		return leftNode;
	}
	
	public TreeNode RotateLeft(TreeNode node)
	{
		TreeNode rightNode = node.right;
		
		node.right = rightNode.left;
		rightNode.left = node;
		
		Recalculate(node);
		Recalculate(rightNode);
		
		return rightNode;
	}
	
	public TreeNode Balance(TreeNode node)
	{
		Recalculate(node);
		
		if (Height(node.left) - Height(node.right) == 2)
		{
			if (Height(node.left.right) > Height(node.left.left))
			{
				node.left = RotateLeft(node.left);
			}
			
			return RotateRight(node);
		}
		else if (Height(node.right) - Height(node.left) == 2)
		{
			if (Height(node.right.left) > Height(node.right.right))
			{
				node.right = RotateRight(node.right);
			}
			
			return RotateLeft(node);
		}
		
		return node;
	}
	
	public void Insert(int data)
	{
		root = Insert(data, root);
	}
	
    private TreeNode Insert(int data, TreeNode node)
    {
        if (node == null)
        {
            node = new TreeNode(data);
        }
        else if (data < node.data)
        {
            node.left = Insert(data, node.left);
            
            node = Balance(node);
        }
        else if (data > node.data)
        {
            node.right = Insert(data, node.right);

            node = Balance(node);
        }
        
        Recalculate(node);

        return node;
    }
    
    public void PreOrder(TreeNode root)
    {
        if (root != null)
        {
            System.out.print(root.data + " ");
            PreOrder(root.left);             
            PreOrder(root.right);
        }
    }
}
