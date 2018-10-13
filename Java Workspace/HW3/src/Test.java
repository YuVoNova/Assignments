import java.util.*;

public class Test
{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		
		Library lib = new Library();
		
		boolean error;
		
		final int bookLimit = 5;
		
		char selection = ' ';
		String delimiter = ",";
		
		String[] keywords;
		
		keywords = new String[3];
		keywords[0] = "Science Fiction"; keywords[1] = "Space"; keywords[2] = "Comedy";
		lib.AddBook("Hitchhiker's Guide to the Galaxy", "Douglas Adams", "0000000000000", 500, 1987, keywords);
		
		keywords = new String[3];
		keywords[0] = "Fantasy"; keywords[1] = "Drama"; keywords[2] = "Heroic";
		lib.AddBook("Hobbit", "JRR Tolkien", "0000000000001", 500, 1943, keywords);
		
		keywords = new String[3];
		keywords[0] = "Fantasy"; keywords[1] = "Drama"; keywords[2] = "Heroic";
		lib.AddBook("The Lord of the Rings", "JRR Tolkien", "0000000000002", 500, 1951, keywords);
		
		keywords = new String[3];
		keywords[0] = "Philosophy"; keywords[1] = "Fiction"; keywords[2] = "Biography";
		lib.AddBook("Ecco Homo", "Friedrich Nietzsche", "0000000000003", 500, 1928, keywords);
		
		keywords = new String[3];
		keywords[0] = "Science"; keywords[1] = "Philosophy"; keywords[2] = "Astrophysics";
		lib.AddBook("Cosmos", "Carl Sagan", "0000000000004", 500, 1980, keywords);
		
		while (selection != 'Q' && selection != 'q')
		{
			input = new Scanner(System.in);
			DisplayMenu();
			selection = input.nextLine().charAt(0);
			input = new Scanner(System.in);
			
			switch (selection)
			{
				case 'a':
				case 'A':
					if (lib.getNumberOfBooks() < bookLimit)
					{
						error = false;
						String s;
						String[] infos;
						System.out.print("Please enter (in order) as book name,author name,13 digit ISBN number,number of pages,publication year,3-5 keywords with commas between: ");
						s = input.nextLine();
						infos = s.split(delimiter);
						infos[2] = infos[2].replaceAll("\\s+", "");
						infos[3] = infos[3].replaceAll("\\s+", "");
						infos[4] = infos[4].replaceAll("\\s+", "");
						
						if (infos.length < 8 || infos.length > 10 || infos[0].length() < 2 || infos[1].length() < 3 || infos[2].length() != 13)
						{
							error = true;
						}
						if (!(IsInteger(infos[3]) && IsInteger(infos[4])))
						{
							error = true;
						}
						
						if (error)
						{
							System.out.println("\nError! Please check your input again.");
						}
						else
						{
							String bookName = infos[0], authorName = infos[1], isbn = infos[2];
							int numberOfPages = Integer.parseInt(infos[3]), publicationYear = Integer.parseInt(infos[4]);
							String[] keyword = new String[infos.length - 5];
							
							for (int i = 0; i < keyword.length; i++)
							{
								keyword[i] = infos[i + 5];
							}
							
							lib.AddBook(bookName, authorName, isbn, numberOfPages, publicationYear, keyword);
						}
					}
					else
					{
						System.out.println("\nUnable to add a book, full capacity reached in this library.");
					}
					break;
					
				case 'd':
				case 'D':
					boolean hasDeleted = false;
					String deleteNo;
					
					System.out.print("\nPlease enter the ISBN number of the book you wish to delete: ");
					deleteNo = input.nextLine();
					hasDeleted = lib.DeleteBook(deleteNo);
					
					if (hasDeleted)
					{
						System.out.println("\nThe book with ISBN number " + deleteNo + " has been deleted.");
					}
					else
					{
						System.out.println("\nCouldn't find a book with the ISBN number " + deleteNo + ".");
					}
					break;
					
				case 'x':
				case 'X':
					lib.DisplayBooks();
					break;
					
				case 'q':
				case 'Q':
					break;
				
				case 'n':
				case 'N':
					System.out.print("\nPlease enter the name of the book you wish to find: ");
					
					String nameToFind;
					nameToFind = input.nextLine();
					
					List<Book> nameBooks = new ArrayList<Book>();
					nameBooks = lib.ReturnBook(nameToFind);
					
					if (nameBooks.size() != 0)
					{
						for (int i = 0; i < nameBooks.size(); i++)
						{
							nameBooks.get(i).DisplayBook();
						}
					}
					else
					{
						System.out.println("No book found named " + nameToFind + ".");
					}
					break;
					
				case 'l':
				case 'L':
					System.out.print("\nPlease enter the author of the book you wish to find: ");
					
					String authorToFind;
					authorToFind = input.nextLine();
					
					List<Book> authorBooks = new ArrayList<Book>();
					authorBooks = lib.ReturnBookByAuthor(authorToFind);
					
					if (authorBooks.size() != 0)
					{
						for (int i = 0; i < authorBooks.size(); i++)
						{
							authorBooks.get(i).DisplayBook();
						}
					}
					else
					{
						System.out.println("No book found of author " + authorToFind + ".");
					}
					break;
					
				case 'm':
				case 'M':
					System.out.print("\nPlease enter the keyword of the books you wish to find: ");
					
					String keywordToFind;
					keywordToFind = input.nextLine();
					
					List<Book> keywordBooks = new ArrayList<Book>();
					keywordBooks = lib.ReturnBookByKeyword(keywordToFind);
					
					if (keywordBooks.size() != 0)
					{
						for (int i = 0; i < keywordBooks.size(); i++)
						{
							keywordBooks.get(i).DisplayBook();
						}
					}
					else
					{
						System.out.println("No book found with keyword " + keywordToFind + ".");
					}
					break;
				
				default:
					System.out.println("Invalid input.\n");
					break;
			}
		}
		
		System.out.println("\nThanks for using!");
	}
	
	public static void DisplayMenu()
	{
		System.out.println("- Press 'A' to insert a book\n- Press 'D' to delete a book\n- Press 'X' to display the books\n- Press 'N' to display books with a name\n- Press 'L' to display books of an author"
							+ "\n- Press 'M' to display books with a keyword\n- Press 'Q' to exit\nYour selection: ");
	}
	
	public static boolean IsInteger(String s)
	{
		boolean valid = false;
		
		try
		{
			Integer.parseInt(s);
			valid = true;
		}
		catch (NumberFormatException e)
		{
			System.out.println("\nThe input " + s + " is invalid.");
		}
		
		return valid;
	}
}
