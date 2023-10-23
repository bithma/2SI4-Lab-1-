
#include "Questions.h"



int Q1_for(){
	int sum = 0;
	
	// calculate your sum below..this has to use for loop
			int i;
			for (i=30; i<=1000;i++){ // for loop that will reiterate to check fa
				if (i%4==0) {
					sum = sum + i; //adds factor
				}
			 }
	// here, we return the calcualted sum:

	return sum;
}
int Q1_while(){
	int sum = 0;

	// calculate your sum below..this has to use while loop
		// set i to 30
		int i = 30;

	while(i <= 1000) {
		// check if i is divisible by 4
			if (i%4==0) {
					sum = sum + i;
					}
			// increment i
			i = i + 1;
		}
	
	// here, we return the calcualted sum:
	return sum;
}
int Q1_do(){
	int sum = 0;
	
	// calculate your sum below..this has to use do-while loop
		int i = 30;
		do {
			// check if i is divisible by 4
			if (i%4==0) {
				// add sum to the original sum
			 	sum = sum + i;
			 }
			// increment i
			i++;
		 }
		// check if i is less than 1000
		while(i<= 1000);

	// here, we return the calcualted sum:
	return sum;
}
//===============================================================================================
int Q2(int Q2_input){
	
	// this is the flag that is holding whether the input number is 5-digit or not
	int IsFiveDigit = 0;
	
	// Do your coding below to check
	 int bignum = 99999;
		 int smallnum = 10000;
	 if ( (Q2_input <= bignum && Q2_input >= smallnum) || (Q2_input >= -bignum && Q2_input <= -smallnum)){
		    IsFiveDigit = 1;
	 }

	//finally, we must return IsFiveDigit, which must be 1 is the number is five digits and 0 otherwise
	return IsFiveDigit;
}
//===============================================================================================
int Q3(float Q3_input){
	
	/* Question 3: 
	Write a program that takes a student's Q3_input as an input, which is a floating point value,
	and returns:
	4 if the Q3_input is in the range 90-100,
	3 if it is in the range 80-89, 
	2 if it is in the range 70-79,
	1 if it is in the range 60-69 and
	0 if the Q3_input is between 0 and 59.
	If the Q3_input is not in the range 0-100, the program shouldreturn -1
*/	
	// this is the varaible that holds the out value to return
	float GPA = 0 ;

	// check if the grade falls between 90 and 100
	if (90 <= Q3_input && Q3_input <= 100) {
			GPA = 4;
		}
		else if (80 <= Q3_input  && Q3_input <=89){
			GPA = 3;
		}
		else if (70 <= Q3_input && Q3_input <= 79){
			GPA = 2;
		}
		else if (60 <= Q3_input && Q3_input <= 69){
				GPA = 1;
			}
		else if (50 <= Q3_input && Q3_input <= 59){
					GPA = 0;
				}
		else{
			// set gpa to -1 for invalid inputs.
			GPA = -1;
		}
	 
	
	
	// finally, we return the GPA
	return GPA;	
}
//===============================================================================================
double Q4(int Q4_input){
	
	// set pi to 0
	double pi=0;
	
	
	// Do your coding below to calculate the pi value
	float div = 1;
	int i = 1;
	//
	for(i=1; i<= Q4_input; i++){
		// check if i is even
		if (i%2 == 0){
			pi = pi - 4/div;
		  div = div + 2;
		}
		// else if i is odd
		else{
		pi = pi + 4/div;
		div = div + 2;
		}

	}

	// finally, we return the pi value
	return pi;	
}
//===============================================================================================
int Q5(){
	
	// this is the varaible that holds and the total number of triples to return at the end of the function
	int totNumTribles=0;
	
	/* Do your coding below
		Use a triple-nested for loop that simply tries all possibilities
		and update the total number of triples if needed
	*/
	  int a = 0 ;
	  int b = 0 ;
	  int c = 0;
	  // loop till a less than 400
	  for (a =1 ; a<= 400; a++){
		for (b = 1; b<= 400; b++){
			for (c = 1 ; c<=400; c++){
				// check if a and b sides follows the triples formula.
				if(a*a + b*b == c*c){
					// check if a is than or equal to b
					if (a<=b){
						totNumTribles = totNumTribles + 1 ;
					}
				}
			}
		}
	}

	//finally you should return the total number of tribles.
	return totNumTribles;
}
//===============================================================================================
int Q6(int Q6_input, int perfect[]){
	
	
	
		//counts is teh variable that should hold the total number of found perfect numbers
		//you should update it within your code and return it at the end
	    int counts=0;


		/*
		*
		*perfect is an array that you need to add into it any perfect number you find
		*which means at the end of this function, the perfect[] array should hold all the found perfect numbers in the range
		*you do not need to return perfect because as stated in lectures arrays are already passed by reference. so, modifying them will 
		*autmoatically reflect in the main calling function.
		*/
	    
	    int i = 0;
	    	    int j = 0;
	    	    int sum =0;

	    	    for(i=1; i<= Q6_input; i++) {//every integer
	    	        for (j=(i-1); j>0; j--){
	    	            if (i%j== 0){
	    	            	// add j to the sum
	    	                sum = sum + j;
	    	        }
	    	        }
	    	        if (sum == i){
	    	            sum = 0;
	    	            // add the current i to the array
	    	            perfect[counts] = i;
	    	            counts = counts + 1;
	    	        }
	    	        else{
	    	            sum = 0;
	    	        }

	    	    }
		
	   // return the total count
	   return counts;

	
}
//===============================================================================================
int Q7a(int Q7_input){
	
	//this is the variable that holds the reversed int.
	int reversedInt=0;
	
	
	// Do your coding logic here
	int remainder = 0;
		int i = 1;
		int sum =0;
		// loop for 7 iterations
		for(i=1; i<=7; i++){
			// get the remainder
		    remainder = Q7_input%10;
		    reversedInt = reversedInt * 10;
		    Q7_input = Q7_input/10;

		    reversedInt = reversedInt + remainder;
		}
	//Hint: Use the division and remainder operators to separate the number into its individual digits.
	//in this part you can assume the knowledge of the number of digits: seven-digit positive integer
	
	
		return reversedInt;
	
}
int Q7b(int Q7b_input){
	
	//this is the variable that holds the reversed int.
	int reversedInt=0;
	

	// initialize variables
	int remainder = 0;
	int i = 1;
	int sum =0;

	while (Q7b_input/1){
		// get the remainder of in the input
		remainder = Q7b_input%10;
		reversedInt = reversedInt * 10;

		Q7b_input = Q7b_input/10;

		// add the remainder to the reversedInt.
		reversedInt = reversedInt + remainder;

	}
	//Hint: Use the division and remainder operators to separate the number into its individual digits.
	//this part should be generalized for any number of allowed digits
	
	return reversedInt;

	
	
	
}
