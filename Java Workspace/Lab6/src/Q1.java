public class Q1
{
	public static final char[] AnswerKey = {'A', 'B', 'E', 'A', 'C', 'B', 'A', 'C', 'D', 'D'};
	
	public static void main(String[] args)
	{
		int studentNumber = 10, correctAnswers, wrongAnswers, netWorth;
		Student example = new Student();
		Student[] students = new Student[studentNumber];
		
		for (int i = 0; i < studentNumber; i++)
		{
			students[i] = new Student();
		}
		
		for (int i = 0; i < studentNumber; i++)
		{
			correctAnswers = 0;
			wrongAnswers = 0;
			netWorth = 0;
			
			for (int j = 0; j < example.QuestionNumber; j++)
			{
				//System.out.println(students[i].answers[j]);
				
				if (students[i].answers[j] == AnswerKey[j])
				{
					correctAnswers++;
				}
				else
				{
					wrongAnswers++;
				}
			}
			
			netWorth = correctAnswers - (wrongAnswers / 3);
			
			System.out.println("Student Number " + (i+1) + ":  " + correctAnswers + 
							   " Correct, " + wrongAnswers + " Wrong, " + netWorth + " NetWorth");
		}
	}
}