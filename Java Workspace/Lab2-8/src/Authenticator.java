import java.util.*;
import java.io.*;

public class Authenticator
{
	public java.util.HashMap<String, String> users;
	
	public String tempPassword;
	public String tempUsername;
	
	public Authenticator()
	{
		users = new java.util.HashMap<String, String>();
		
		tempPassword = "";
		tempUsername = "";
	}
	
	public boolean Login()
	{
		Scanner input = new Scanner(System.in);
		
		System.out.print("\nUsername: ");
		
		tempUsername = input.nextLine();
		
		if (users.containsKey(tempUsername))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
