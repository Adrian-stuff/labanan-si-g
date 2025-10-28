import java.util.*;
public class QuestionSix{
    public static void main (String[]args){
        QuestionSix Answer = new QuestionSix();
        Scanner userInput= new Scanner(System.in);
        System.out.print("Enter The Size of Iteration: ");
		int size=userInput.nextInt();
		System.out.println("\n=======================")   ;
        System.out.println(     "\nTOTAL: " + Answer.i(size)    )   ;
		System.out.println("\n=======================")   ;
        System.out.println(     "\nTOTAL: " + Answer.ii(size)    )   ;
		System.out.println("\n=======================")   ;
        System.out.println(     "\nTOTAL: " +Answer.iii(size)    )   ;
		System.out.println("\n=======================")   ;
        System.out.println(     "\nTOTAL: " + Answer.iv(size)    )   ;
		System.out.println("\n=======================")   ;
        System.out.println(     Answer.v(size)    )   ;
		System.out.println("\n=======================")   ;
        Answer.vi(size);
		System.out.println("\n=======================")   ;
        System.out.println(     "\nTOTAL: " + Answer.vii(size)    )   ;
		System.out.println("\n=======================")   ;
        System.out.println(     "\nTOTAL: " + Answer.viii(size)    )   ;
		System.out.println("\n=======================")   ;
        System.out.println(     "\nTOTAL: " + Answer.ix(size)    )   ;
		System.out.println("\n=======================")   ;
        System.out.println(     "\nTOTAL: " + Answer.x(size)    )   ;
		System.out.println("\n=======================")   ;
        System.out.println(     "\nTOTAL: " + Answer.xi(size)    )   ;
		System.out.println("\n=======================")   ;
        System.out.println(     "\nSimplest Form: " + Answer.xii(size)    )   ;
		System.out.println("\n=======================")   ;
        Answer.xiii(size);
		System.out.println("\n=======================")   ;
        System.out.println(     "\nTOTAL: " + Answer.xiv(size)    )   ;
		System.out.println("\n=======================")   ;
        System.out.println(     "\nTOTAL: " + Answer.xv(size)    )   ;
		System.out.println("\n=======================")   ;
        System.out.println(     "\nTOTAL: " + Answer.xvi(size)    )   ;
		System.out.println("\n=======================")   ;
        System.out.println(     "\nSimplest Form: " + Answer.xvii(size)    )   ;
		System.out.println("\n=======================")   ;
        System.out.println(     "\nSimplest Form: " + Answer.xix(size)    )   ;
		System.out.println("\n=======================")   ;
        System.out.println(     "\nSimplest Form: " + Answer.xx(size)    )   ;
    }
	
    public double  i (int  userInput){//S = 1 + 1/2 + 1/3 ……..1/10 
        double  S=1;
        System.out.print("S = 1");
        for (double  count=0;count<userInput;count++){
            System.out.print(" + 1/"+ (count+1));
            S+=(1/(count+1));
        }
        return S;
    }
	
    public int  ii (int  userInput){//P= (1*2) + (2 *3) + (3* 4)+…….(8 *9) +(9 *10)
        int  P=0;
        System.out.print("P = ");
        for (int  count=P;count<userInput;count++){
            System.out.print("("+ (count+1)+"*"+ (count+2)+")");
            P+=(count+1)*(count+2);
            if(count<userInput-1)System.out.print(" + ");
        }
        return P;
    }
	
    public double  iii (int  userInput){// Q= ½ + ¾ +5/6 +….13/14
        double  Q=0.0;
        System.out.print("Q = ");
        double  number=0.0;
        for (int  count=0;count<userInput;count++){
            Q+=(++number)/(++number);
            System.out.print("("+ (number-1)+"/"+ number+")");
            if(count<userInput-1)System.out.print(" + ");
        }
        return Q;
    }
	
    public double  iv (int  userInput){//S = 2/5 + 5/9 + 8/13….n
        double  S=0;
        System.out.print("S = ");
        for (double  count=0;count<userInput;count++){
            
            S+=(2+count*3)/(5+count*4);
            System.out.print("("+ (2+count*3)+"/"+ (5+count*4)+")");
            if(count<userInput-1)System.out.print(" + ");
        }
        return S;
    }
	
	public String v (int  userInput){// S = x + x^2+ x^3+ x^4......+ x^9+ x^10
		String S="S = ";
		System.out.print("S = ");
        for (int  count=0;count<userInput;count++){
			S+=("x"+ (count>0 ? ("^"+ count ): ""));
            if(count<userInput-1)S+=" + ";
        }
		System.out.println(S);
		return "S = ( x( 1 - x^"+userInput+") ) / 1 - x";
    }
	
	public String vi (int  userInput){//P= x + x^3/3 + x^5/5 + x^7/7……………n terms
		String P="P = ";
        for (int  count=0;count<userInput;count++){
            P+=("x"+ (count>0 ? ("^"+( count*2 +1 ) + "/" + ( count*2 +1) ): ""));
            if(count<userInput-1) P+=(" + ");
        }
		System.out.println(P);
		return P;
    }
	
	public int  vii (int  userInput){//S= (13 *1) + (12 * 2)……(1 *13)
        int  S=0;
		System.out.print("S = ");
        for (int  count=0;count<userInput;count++){
            System.out.print( "(" +(userInput-count)+ "*" +(count+1)+ ")" );
			S+=(userInput-count)*(count+1);
            if(count<userInput-1)System.out.print(" + ");
        }
		return S;
    }
	
	public double  viii (int  userInput){//S = 1 + 1/(2^2) + 1/ (3^3) + 1/(4^4) + 1/(5^5)
        double  S=1;
        System.out.print("S = 1");
        for (int  count=0;count<userInput;count++){
            System.out.print(" + 1/("+ (count+1) + "^" + (count+1)+")");
            S+=( 1/ Math.pow( (count+1),(count+1) ) );
        }
        return S;
    }
	
	public double  ix (int  userInput){//S = 1/1! + 1/2! + 1/3! ……………+1/n!
        double  S=0;
        System.out.print("S = ");
        for (int  count=0;count<userInput;count++){
            System.out.print("1/"+(int)(count+1)+"!");
			double  factorial=1;
			for (int n=1;n<=count+1;n++){
				factorial*=n;
			}
            S+=( 1/factorial);
			if(count<userInput-1)System.out.print(" + ");
        }
        return S;
    }

	public double  x (int  userInput){//S = 1 + 1/3! + 1/5!+……..n terms
        double S=0;
        System.out.print("S = ");
        for (int count=0;count<userInput;count++){
			int value=0;
            System.out.print("1/"+(count*2+1)+"!");
			double factorial=1;
			for (int n=1;n<=(count*2+1);n++){
				factorial*=n;
			}
            S+=( 1/factorial);
			if(count<userInput-1)System.out.print(" + ");
        }
        return S;
    }
	public int xi (int  userInput){//S = 1 + (1+2) +(1+2+3) + (1+2+3+4)……………+(1+2+3…….20)
		int S=0;
        System.out.print("S =");
        for (int count=0;count<userInput;count++){
            int value=0;
			System.out.print("(");
			for(int parCount=0;parCount<count+1;parCount++){
				value+=parCount+1;
				System.out.print(parCount+1);
				if(parCount<count)System.out.print(" + ");
			}
            System.out.print(")");
			if(count<userInput-1)System.out.print(" + ");
			S+=value;
        }
        return S;
	} 
	
	public String xii (int  userInput){// S= x + x^2/2! + x^3/3! + x^4/4!.....+x^10/10!
		System.out.print("S = ");
        for (int count=0;count<userInput;count++){
			System.out.print("x");
			if(count>0)System.out.print("^" + (count+1) + " / " + (count+1) + "! ");
			if(count<userInput-1)System.out.print(" + ");
        }
        return ("S = e^x - 1 - " + ("( x^" + (userInput+1) + " / " + (userInput+1) + "! )") +" - "+ ("( x^" + (userInput+2) + " / " + (userInput+2) + "! )")  + " - ...");
	} 
	public String xiii (int  userInput){// P = x/2! + x^2/3! +…….x^9/10!
		String P="P = ";
		 for (int count=0;count<userInput;count++){
			P+=("x");
			if(count>0)P+=("^" + (count+1) );
			P+=( " / " + (count+2) + "! ");
			if(count<userInput-1)P+=(" + ");
        }
		System.out.print(P);
		return P;
	}
	
	public int xiv (int  userInput){// S = 1 – 2 + 3 - 4………. + 9 – 10
		int S=0;
		System.out.print("S = ");
		for (int count=0;count<userInput;count++){
			System.out.print(count+1);
			if(count%2!=0){
				S-= (count+1);
				if(count<userInput-1)System.out.print(" + ");
			}else{
				S+= (count+1);
				if(count<userInput-1)System.out.print(" - ");
			}
			
        }
		return S;
	}
	public int xv (int  userInput){// S = 1 -2^2+ 3^2- 4^2………. +9^2- 10^2
		int S=0;
		System.out.print("S = ");
		for (int count=0;count<userInput;count++){
			System.out.print(count+1);
			if(count>0)System.out.print("^2");
			if(count%2!=0){
				S-= (count+1)*(count+1);
				if(count<userInput-1)System.out.print(" + ");
			}else{
				S+= (count+1)*(count+1);
				if(count<userInput-1)System.out.print(" - ");
			}
			
        }
		return S;
	}
	public double xvi (int  userInput){// S = 1/(1 + 2) + 3/(3 + 5)……15/(15 + 16)
		double S=0.0;
		System.out.print("S = ");
		for (double count=0;count<userInput;count++){
			S+=(count+1)/((count+1)+(count+3));
			System.out.print( (count+1)+"/( "+((count+1)+" + "+(count+3))+" ) " ) ;
			if(count<userInput-1)System.out.print(" + ");
        }
		return S;
	}

	public String xvii (int  userInput){// S = 1 +x^2/2! – x^4/4! + x^6/6!....n

		System.out.print("S = ");
        for (int count=0;count<userInput;count++){
			if(count>0)System.out.print("x^" + (count)*2 + " / " + (count)*2 + "! ");
			else System.out.print("1");
			if(count<userInput-1){
				if(count%2!=0) System.out.print(" - ");
				else System.out.print(" + ");
			}
        }
        return ("S = cos(x)");
	
	}
	
	public int xviii (int  userInput){//S = 1 + ( 1 + 2) + (1+2+3)……..(1+2+3+4…..20)
		int S=0;
        System.out.print("S =");
        for (int count=0;count<userInput;count++){
            int value=0;
			System.out.print("(");
			for(int parCount=0;parCount<count+1;parCount++){
				value+=parCount+1;
				System.out.print(parCount+1);
				if(parCount<count)System.out.print(" + ");
			}
            System.out.print(")");
			if(count<userInput-1)System.out.print(" + ");
			S+=value;
        }
        return S;
	} 
	public String xix (int  userInput){//S = 1 + x + x^2/2 + x^3/3…….+x^n/n

		System.out.print("S = ");
        for (int count=0;count<userInput;count++){
			if(count>0){
				if(count>1)System.out.print("x^" + (count) + "/" + (count));
				else System.out.print("x");
			}
			else System.out.print("1");
			if(count<userInput-1)System.out.print(" + ");
        }
        return ("S ~ 1 - ln(1 - x)");
	} 
	public double xx (int  userInput){//S = 1 * 3/ 2 * 4 * 5   +   2 * 4 / 3 * 5 * 6   +   3 * 5/ 4 * 6 * 7……..n * (n+2)/ (n+1) *(n+3) * (n+4)
		double S=0.0;
		System.out.print("S = ");
		for (double count=0;count<userInput;count++){
			S+=  (count+1)*(count+3)  / (count+2)  *(count+4)*(count+5);
			System.out.print( (count+1)+" * "+(count+3)+" / "+(count+2)+" * "+(count+4)+" * "+(count+5) );
			
			if(count<userInput-1)System.out.print(" + ");
			
        }
        return S;
	} 
}