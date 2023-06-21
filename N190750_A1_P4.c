/*
  			Author Name : N.Mariya Babu
  		        Id  No. : N190750
 	  Assignment Number : 1
       programme Number : 4
  programme Description : C Programme to find the power of two numbers without using the power functio 
 				   Date : 6/21/2022 (MM/DD/YYYY)
  		  certification : I hereby certify that this work is my own and none of it is the work of any other person 
*/
//Header Files 
#include<stdio.h>
//Function Declaration   
int power(int,int);
//Main Function 
int main(){
    int a,b,i,result;
    printf("Enter the a value: ");
    scanf("%d",&a);
    printf("Enter the b value :");
    scanf("%d",&b);
    result = power(a,b);
    printf("The %d power  %d is %d",a,b,result);
}
//Power Function 
int power(int a ,int b){
    if(b>0){
        a = a * power(a,b-1);
        return a;
    }
    else{
        return 1;
    }
}
