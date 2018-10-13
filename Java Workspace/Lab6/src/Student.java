public class Student
{
	public final int QuestionNumber = 10;
	public char[] answers = new char[QuestionNumber];
	
	public Student()
	{
		for (int i = 0; i < QuestionNumber; i++)
		{
			answers[i] = (char) ('A' + (Math.random() * 5));
		}
	}
}
