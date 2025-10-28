import java.util.*;
public class QuestionSevenSoloTable{
	public static void main (String[]args){
		Scanner userInput= new Scanner(System.in);
		QuestionSevenSoloTable answer = new QuestionSevenSoloTable();
		System.out.print("Enter A number to create a table of:  ");
		int value = userInput.nextInt();
		answer.makeSoloTable(value);
	}
	public void makeSoloTable(int value){
		int length=value;
		if (value<0)length*=(-1);
		for (int num=0;num<length || num<10;num++){
			int product=value*(num+1);
			System.out.println(value+" * "+(num+1)+" = "+product);
		}
	}	
}