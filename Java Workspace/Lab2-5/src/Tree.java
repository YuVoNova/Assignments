import java.util.*;

public class Tree
{
	public TreeNode root;
	
	public Tree()
	{
		root = null;
	}
	
	public void InOrderRecursive(TreeNode root)
	{
		if (root != null)
		{
			InOrderRecursive(root.left);
			System.out.print(root.data + " ");
			InOrderRecursive(root.right);
		}
	}
	
	public void InOrderIterative(TreeNode root)
	{
		if (root != null)
		{
	        Stack<TreeNode> stack = new Stack<TreeNode>();
	        TreeNode currentNode = root;
	        
	        while (currentNode != null)
	        {
	            stack.push(currentNode);
	            currentNode = currentNode.left;
	        }
	        
	        while (stack.size() > 0)
	        {
	            currentNode = stack.pop();
	            System.out.print(currentNode.data + " ");
	            if (currentNode.right != null)
	            {
	                currentNode = currentNode.right;
	                
	                while (currentNode != null)
	                {
	                    stack.push(currentNode);
	                    currentNode = currentNode.left;
	                }
	            }
	        }
		}
	}
}
