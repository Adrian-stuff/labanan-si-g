import java.util.*;
public class QuestionTwelvePerfectSquares{
	public static void main (String[]args){
		Scanner userInput= new Scanner(System.in);
		QuestionTwelvePerfectSquares answer = new QuestionTwelvePerfectSquares();
		System.out.print("Enter To Check Perfect Square:  ");
		int value = userInput.nextInt();
		System.out.println( value +" is " + (answer.isPerfectSquare(value) ? "a" : "not a")+" perfect Square  ");
	}
	public boolean isPerfectSquare(int value){
		for (int num=0; num * num <= value ;num++){
			if (num*num==value) return true;
		}
		return false;
	}
}