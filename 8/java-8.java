import java.util.*;
public class QuestionEightFullTable{
	public static void main (String[]args){
		Scanner userInput= new Scanner(System.in);
		QuestionEightFullTable answer = new QuestionEightFullTable();
		System.out.print("Enter A number to create a table of:  ");
		int value = userInput.nextInt();
		answer.makeFullTable(value);
	}
	public void makeFullTable(int value){
		if (value<1)return;
		System.out.println("0 > ");
		for (int num=0;num<value || num<10;num++){
			System.out.print((num+1)+" > ");
			for(int unit=0;unit<value;unit++){
				int product=(unit+1)*(num+1);
				System.out.print("\t"+product);		
			}
			System.out.println();
		}
	}	
}