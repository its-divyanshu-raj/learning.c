// TO check the number is Palindrome or not  


#include<stdio.h>
int main(){
    int num, temp,sum=0, r ;   // taking the input 
    printf("Enter the number:") ;  // 1 output to enter the number 
    scanf("%d",&num) ;       
    temp=num;                  

    while(num>0) 
    {
        r=num%10 ;
        sum=(sum*10)+r; 
        num=num/10; 
    }
    if(sum==temp) 
    printf("Number is Palindrome:") ;     // if case the sum is equal to temp the it will print a palindrome 
    else 
    printf("NUmber is not Palindrome") ;
    return 0 ;
    
}
