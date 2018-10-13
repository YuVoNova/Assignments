public class Tester
{
	public static void main(String[] args)
	{
		AVLTree tree = new AVLTree();
		
		tree.Insert(35);
		tree.Insert(95);
		tree.Insert(85);
		tree.Insert(65);
		tree.Insert(45);
		tree.Insert(100);
		tree.Insert(70);
		tree.Insert(10);
		tree.Insert(50);
		tree.Insert(20);
		
		tree.PreOrder(tree.root);
	}
}
