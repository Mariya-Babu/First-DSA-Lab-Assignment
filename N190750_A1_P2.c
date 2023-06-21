/*
  			Author Name : N.Mariya Babu
  		        Id  No. : N190750
 	  Assignment Number : 1
       programme Number : 2
  programme Description : C Programme for multiplication  without using the division operator
 				   Date : 6/21/2022 (MM/DD/YYYY)
  		  certification : I hereby certify that this work is my own and none of it is the work of any other person 
*/
//Header Files 
#include<stdio.h>
#include<math.h>
int mult(int,int);
//Main Function 
int main(){
    int a,b,i,result;
    printf("Enter the a value: ");
    scanf("%d",&a);
    printf("Enter the b value :");
    scanf("%d",&b);
    result = mult(a,b);
    printf("The multiplaction of the %d and %d is %d",a,b,result);
}
//Function to multiply without out * operator 
int mult(int a,int b){
    if(b>0){
       a = a + mult(a,b-1);
       return a;
    }
    else{
        return 0;
    }
}

