import java.util.*;
public class QuestionThirteenHCF{
	public static void main (String[]args){
		QuestionThirteenHCF answer =new QuestionThirteenHCF();
		Scanner userInput= new Scanner(System.in);
		System.out.print("Enter An First Integer:  ");
		int value = userInput.nextInt();
		int []value1Factor=answer.getFactors(value);
		System.out.print("Enter your second Integer:  ");
		int value2 = userInput.nextInt();
		int []value2Factor=answer.getFactors(value2);
		answer.printArray(value1Factor);
		answer.printArray(value2Factor);
		System.out.println("====[CF]====");
		int []CF = answer.getCF(value2Factor,value1Factor);
		answer.printArray(CF);
		System.out.println("====[HCF]====");
		System.out.println(CF[CF.length-1]);
		
	}
	public int[] getFactors(int value){// creates an array containing all the factors
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
		int []cleanedArr=getCleanedArray(factors);
		sortArr(cleanedArr);
		return cleanedArr;
	}
	private boolean inArray(int [] arr , int value){// checks if value id in array
		for (int len=0;len< arr.length && arr[len]!=0;len++){
			if (arr[len]==value) return true;
		}
		return false;
	}
	public void printArray(int [] arr){
		System.out.println();
		for (int len=0;len< arr.length && arr[len]!=0;len++){
			System.out.print(arr[len]);
			if (len< arr.length-1)System.out.print(",");
		}
		System.out.println();
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
	private void sortArr(int []arr){
		for (int len=0;len< arr.length;len++){
			for (int cell=len;cell<arr.length;cell++){
				if (arr[len]>arr[cell]){
					int temp=arr[len];
					arr[len]=arr[cell];
					arr[cell]=temp;
				}
			}
		}
	}
	private int[] getCF(int []arr1, int []arr2){
		int mergedLength;
		boolean arrOneIsLonger=true;
		if (arr1.length>arr2.length)mergedLength=arr1.length;
		else {
			arrOneIsLonger=false;
			mergedLength=arr2.length;
		}
		
		int [] merged = new int [mergedLength];
		int cell=0;
		for (int len=0;len<arr1.length;len++){
			if (inArray(arr2,arr1[len]))merged[cell++]=arr1[len];
		}
		for (int len=0;len<arr2.length;len++){
			if (inArray(arr1,arr2[len])){
				if (!inArray(merged,arr2[len]))merged[cell++]=arr2[len];
			}
		}
		int []cleanedArr=getCleanedArray(merged);
		sortArr(cleanedArr);
		return cleanedArr;
	}
}