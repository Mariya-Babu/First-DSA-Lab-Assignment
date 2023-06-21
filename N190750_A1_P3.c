/*
  			Author Name : N.Mariya Babu
  		        Id  No. : N190750
 	  Assignment Number : 1
       programme Number : 3
  programme Description : C Programme for division without using the division operator 
 				   Date : 6/28/2022 (MM/DD/YYYY)
  		  certification : I hereby certify that this work is my own and none of it is the work of any other person 
*/
//Header Files 
#include<stdio.h>
#include<math.h>
//Function Declaration 
int div(int,int);
//Main Function 
int main(){
    int a,b,i,result;
    printf("Enter the a value: ");
    scanf("%d",&a);
    printf("Enter the b value :");
    scanf("%d",&b);
    result = div(a,b);
    printf("The division of the %d and %d is %d",a,b,result);
}
//Function to find the division of two numbers 
int div(int a,int b){
    int ;
    if(a>=b){
        return 1 + div(a-b,b);
    }
    else{
        return 0;
    }
}
