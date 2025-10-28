import java.util.*;
public class QuestionNineFactorial{
    public static void main (String[]args){
		QuestionNineFactorial answer= new QuestionNineFactorial();
        Scanner userInput= new Scanner(System.in);
		System.out.print("Enter The Factorial Size:  ");
		int size=userInput.nextInt();
		System.out.print("\nFactorial = "+answer.getFactorial(size));
	}
	public int  getFactorial  (int  userInput){
		if (userInput==0){
			System.out.print("Factorial = 0");
			return 0;
		}
		System.out.print("Factorial = ");
		boolean isNegative=false;
		if (userInput<0){
			userInput*= -1;
			System.out.print(" -( ");
			isNegative=true;
		}
        
		int  factorial=1;
		for (int count=0;count<userInput;count++){
			factorial*=count+1;
			System.out.print(count+1);
			if(count<userInput-1)System.out.print(" * ");
		}
		
		if (isNegative){
			System.out.print(" )");
			return factorial*(-1);
		}
		
        return factorial;
    }
}