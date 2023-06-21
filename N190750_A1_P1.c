/*
  			Author Name : N.Mariya Babu
  		        Id  No. : N190750
 	  Assignment Number : 1
       programme Number : 1
  programme Description : C Programme to find the gcd of two number's  
 				   Date : 6/21/2022 (MM/DD/YYYY)
  		  certification : I hereby certify that this work is my own and none of it is the work of any other person 
*/
//Header Files 
#include<stdio.h>
//Function Definition
int gcd(int,int);
//Main Function 
int main(){
    int a,b,result;
    printf("Enter the a value :");
    scanf("%d",&a);
    printf("Enter the b value :");
    scanf("%d",&b);
    if(a>b){
         result = gcd(a,b);
    }else{
        result = gcd(b,a);
    }
    printf("The gcd of the %d and %d is %d",a,b,result);
}
//Function to find GCD 
int gcd(int a ,int b){
    int rem;
    rem = a%b;
    if(rem==0){
        return b;
    }
    else{
        return gcd(b,rem);
    }
}
