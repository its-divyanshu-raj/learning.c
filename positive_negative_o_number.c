// To check a no, is positive , negative or 0 .

------------------------------------------------------------------------------------------------------------------------------------------------------------


#include<stdio.h>
int main(){
    double num;     // lets assuming that its a type of number we said it as ( double num ) 
    printf("Enter a number : " ) ;  // output to the complier to  show that enter the number 
    scanf("%lf", &num ) ;           // a type of giving input to compiler 
    if (num <= 0.0 ) {              // case for the value to be 0 
       if(num== 0.0 )        
             printf("you entered 0 " ) ; // if the no, is 0 
             else
            printf("you entered a negavtive number ") ;  //    if our no. is less than 0 
    }  
    else 
        printf("you entered a positive number" ) ; // if our  no. is positive 
        return 0 ;
}
