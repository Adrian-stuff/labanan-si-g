import java.util.*;
public class QuestionElevenPrimeNumbersBefore{
	public static void main (String[]args){
		QuestionElevenPrimeNumbersBefore answer =new QuestionElevenPrimeNumbersBefore();
		Scanner userInput= new Scanner(System.in);
		System.out.print("Enter An Integer:  ");
		int value = userInput.nextInt();
		System.out.print(" Prime Numbers Before: " );
		answer.printArray( answer.primeNumbers(value) );
	}
	public int [] primeNumbers(int value){
		int temp[] = new int[value];
		int cell=0;
		for (int num=0;num<value;num++){
			if (isPrime(num+1)) temp[cell++]=num+1;
		}
		return getCleanedArray(temp);
	}
	public boolean isPrime(int value){
		if ( value < 2 )return false;
		if ( value == 2 )return true;
		if (getFactors(value).length > 2)return false;
		return true;
	}
	private int[] getFactors(int value){// creates an array containing all the factors
		if (value<1)return new int[1];
		int []factors = new int[value];
		int cell=0;
		factors[cell++]=1;
		if (value==1)return factors;
		factors[cell++]=value;
		if (value%2==0){
			factors[cell++]=2;
			factors[cell++]=value/2;
		}
		for (int factor1 = 0; factor1<value/2;factor1++){
			for (int factor2 = 0; factor2<=factor1 &&  !(factor2*factor1>value);factor2++){// stops is f1*f2 is greater than value
			//System.out.println("Test ["+factor2+"]*["+factor1+"]:"+(factor2*factor1));
				if (factor1*factor2==value){//tests if is factor
					//System.out.println(">>>>>>>>>>>>>>>Factor ["+factor2+"]*["+factor1+"]:"+(factor2*factor1));
					if (!inArray(factors,factor1)) {//looks if this factor is in the array add adds it if not,one for factor 1 and 2
						factors[cell]=factor1;
						cell++;
					}
					if (!inArray(factors,factor2)) {
						factors[cell]=factor2;
						cell++;
					}
				}
			}
		}
		return getCleanedArray(factors);
	}
	private int[] getCleanedArray(int [] arr){// removes extra length/index
		int arrLength=0;
		for (int len=0;len< arr.length && arr[len]!=0;len++){
			arrLength++;
		}
		int[] cleanedArr = new int[arrLength];
		for (int len=0;len< arr.length && arr[len]!=0;len++){
			cleanedArr[len]=arr[len];
		}
		return cleanedArr;
	}
	private boolean inArray(int [] arr , int value){// checks if value id in array
		for (int len=0;len< arr.length && arr[len]!=0;len++){
			if (arr[len]==value) return true;
		}
		return false;
	}
	public void printArray(int [] arr){
		for (int len=0;len< arr.length && arr[len]!=0;len++){
			System.out.print(arr[len]);
			if (len< arr.length-1)System.out.print(",");
		}
	}
}