public class Student
{
	private int id;
	private boolean status;
	private double gpa;
	private String name;
	private static int studentCount = 0;
	
	public Student()
	{
		id = 0;
		status = true;
		gpa = 0.0;
		name = "Ali Yaman";
		studentCount++;
	}
	
	public int getId()						{ return id; }
	public void setId(int value)			{ id = value; }
	
	public boolean getStatus()				{ return status; }
	public void setStatus(boolean value)	{ status = value; }
	
	public double getGpa()					{ return gpa; }
	public void setGpa(double value)		{ gpa = value; }
	
	public String getName()					{ return name; }
	public void setName(String value)		{ name = value; }
	
	public int getStudentCount()			{ return studentCount; }
	
	public String toString()
	{
		String desc = (this.status == false) ? "The student is not registered." :
					  ("ID: " + this.id + "\nName: " + this.name + "\nGPA: " + this.gpa);
		
		return desc;
	}
}
