public class Book
{
	private String bookName;
	private String authorName;
	private String isbn;
	
	private int numberOfPages;
	private int publicationYear;
	
	private String[] keywords;
	
	
	public Book()
	{
		
	}
	public Book(String bookName, String authorName, String isbn, int numberOfPages, int publicationYear, String[] keywords)
	{
		this.setBookName(bookName);
		this.setAuthorName(authorName);
		this.setIsbn(isbn);
		this.setNumberOfPages(numberOfPages);
		this.setPublicationYear(publicationYear);
		this.setKeywords(keywords);
	}
	
	public String getBookName()
	{
		return bookName;
	}
	public void setBookName(String bookName)
	{
		if (bookName.length() < 2)
		{
			System.out.println("\nInvalid input, please enter a name with equal to or more than 2 letters.\n");
		}
		else
		{
			this.bookName = bookName;
		}
	}
	public String getAuthorName()
	{
		return authorName;
	}
	public void setAuthorName(String authorName)
	{	
		if (authorName.length() < 3)
		{
			System.out.println("\nInvalid input, please enter a name with equal to or more than 3 letters.\n");
		}
		else
		{
			this.authorName = authorName;
		}
	}
	public String getIsbn()
	{
		return isbn;
	}
	public void setIsbn(String isbn)
	{
		if (isbn.length() != 13)
		{
			System.out.println("\nInvalid input, please enter ISBN number with 13 digits.\n");
		}
		else
		{
			this.isbn = isbn;
		}
	}
	public int getNumberOfPages()
	{
		return numberOfPages;
	}
	public void setNumberOfPages(int numberOfPages)
	{
		if (numberOfPages <= 0)
		{
			System.out.println("\nInvalid input, please enter a positive integer.\n");
		}
		else
		{
			this.numberOfPages = numberOfPages;
		}
	}
	public int getPublicationYear()
	{
		return publicationYear;
	}
	public void setPublicationYear(int publicationYear)
	{
		if (publicationYear < 1923 || publicationYear > 2017)
		{
			System.out.println("\nInvalid input, please enter a year between 1923-2017.\n");
		}
		else
		{
			this.publicationYear = publicationYear;
		}
	}
	public String[] getKeywords()
	{
		return keywords;
	}
	public void setKeywords(String[] keywords)
	{
		if (keywords.length < 3 || keywords.length > 5)
		{
			System.out.println("\nInvalid input, please enter 3 to 5 keywords.\n");
		}
		else
		{
			this.keywords = keywords;
		}
	}
	
	public boolean SearchKeyword(String keyword)
	{
		boolean found = false;
		
		for (int i=0; i < keywords.length; i++)
		{
			if (keyword.equalsIgnoreCase(keywords[i]))
			{
				found = true;
				break;
			}
		}
		
		return found;
	}
	
	public void DisplayBook()
	{
		System.out.print(bookName + ", " + authorName + ", " + isbn + ", " + numberOfPages + ", " + publicationYear);
		for (int i=0; i < keywords.length; i++)
		{
			System.out.print(", " + keywords[i]);
		}
		System.out.print("\n");
	}
}
