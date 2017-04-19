* Title: Fibonacci series
Author: Vinoth Selvaraj
© http://students3k.com
*/
//Header files
#include <stdio.h>
#include <conio.h>
 
void main()
{
    //Program variables
    int cn,rge,num1=0,num2=1,num3;
    clrscr(); //Function to clear previous output
    //Display function
    printf("Enter the range of Fibonacci series to generate : ");
    scanf("%d",&rge); //Getting input function
 
    printf("%d-->%d-->",num1,num2);
 
    //Creating fibonacci series.
    for(cn=2;cn<rge;cn++) //Looping statement
    {
        num3=num1+num2;
        printf("%d-->",num3);
        num1=num2;
        num2=num3;
    }
    getch();
}
