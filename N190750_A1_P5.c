/*
  			Author Name : N.Mariya Babu
  		        Id  No. : N190750
 	  Assignment Number : 1
       programme Number : 5
  programme Description : C rogramme to find the given number is polindrome or not
 				   Date : 6/21/2022 (MM/DD/YYYY)
  		  certification : I hereby certify that this work is my own and none of it is the work of any other person 
*/
//Header Files
#include<stdio.h>
//Function Declaration  
int rev(int);
//Main Function 
int main(){
    int n,revers;
    printf("Enter the n value ");
	printf("to check the number is polindrome or not :");
    scanf("%d",&n);
    revers = rev(n);
    if(revers==n){
        printf("The given number is polindrome!");
    }
    else{
        printf("the given number is not polindrome");
    }
}
//Function to reverse the given number 
int rev(int n){
    static int rem = 0 ;
    if(n>0){
        rem = rem * 10 + n%10;
        return rev(n/10);
    }
    else{
        return rem;
    }
}
