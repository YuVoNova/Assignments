public class Test
{
	public Student s1 = new Student();
	public Student s2 = new Student();
	public Student s3 = new Student();
	
	public Test()
	{
		s1.setId(1);
		s1.setName("Yusuf Metindoðan");
		s1.setGpa(0.001 + Math.random() * 4);
		
		s3.setStatus(false);
		
		System.out.println("Student 1:\n" + s1.toString());
		System.out.println("\nStudent 2:\n" + s2.toString());
		System.out.println("\nStudent 3:\n" + s3.toString());
		
		System.out.println("\nTotal student count: " + s1.getStudentCount());
	}
}
