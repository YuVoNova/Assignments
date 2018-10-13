import java.util.*;

public class Library
{
	private List<Book> books;
	
	private static int numberOfBooks = 0;
	
	public Library()
	{
		books = new ArrayList<Book>();
	}
	
	public int getNumberOfBooks() { return numberOfBooks; }
	
	public void AddBook(String bookName, String authorName, String isbn, int numberOfPages, int publicationYear, String[] keywords)
	{
		Book book = new Book(bookName, authorName, isbn, numberOfPages, publicationYear, keywords);
		
		books.add(book);
		
		numberOfBooks++;
		
		System.out.println("\nThe book has been successfully added to the library.");
	}
	
	public List<Book> ReturnBook(String bookName)
	{
		List<Book> returnBooks = new ArrayList<Book>();
		
		for (int i = 0; i < books.size(); i++)
		{
			if (books.get(i).getBookName().equalsIgnoreCase(bookName))
			{
				returnBooks.add(books.get(i));
			}
		}
		
		return returnBooks;
	}
	
	public List<Book> ReturnBookByAuthor(String authorName)
	{
		List<Book> returnBooks = new ArrayList<Book>();
		
		for (int i = 0; i < books.size(); i++)
		{
			if (books.get(i).getAuthorName().equalsIgnoreCase(authorName))
			{
				returnBooks.add(books.get(i));
			}
		}
		
		return returnBooks;
	}
	
	public List<Book> ReturnBookByKeyword(String keyword)
	{
		List<Book> returnBooks = new ArrayList<Book>();
		
		for (int i = 0; i < books.size(); i++)
		{
			if (books.get(i).SearchKeyword(keyword))
			{
				returnBooks.add(books.get(i));
			}
		}
		
		return returnBooks;
	}
	
	public void DisplayBooks()
	{
		System.out.print("\nThe books stored in the library are: ");
		
		for (int i = 0; i < books.size(); i++)
		{
			if (i == 0)
			{
				System.out.print(books.get(i).getBookName());
			}
			else
			{
				System.out.print(", " + books.get(i).getBookName());
			}
		}
		
		System.out.println("\n");
	}
	
	public boolean DeleteBook(String isbn)
	{
		boolean hasDeleted = false;
		
		for (int i = 0; i < books.size(); i++)
		{
			if (books.get(i).getIsbn().equals(isbn))
			{
				books.remove(i);
				numberOfBooks--;
				hasDeleted = true;
			}
		}
		
		return hasDeleted;
	}
}
