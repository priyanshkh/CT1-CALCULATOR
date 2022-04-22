#include <stdio.h>  
int main()  
{  
    char choice;  
    int n1, n2;   
    float ans;  
    printf (" Select an operator (+, -, *, /) \n ");  
    scanf ("%c", &choice); 
    printf (" Enter first number: ");  
    scanf(" %d", &n1); 
    printf (" Enter second number: ");  
    scanf (" %d", &n2);
      
    if (choice == '+')  
    {  //bsdk calculator khareed le dukaan se
        ans = n1 + n2;
        printf (" Addition of %d and %d: %f", n1, n2, ans);  
    }  
      
    else if (choice == '-')  
    {  
        ans = n1 - n2;
        printf (" Subtraction of %d and %d: %f", n1, n2, ans);  
    }  
      
    else if (choice == '*')  
    {  
        ans = n1 * n2;
        printf (" Multiplication of %d and %d: %f", n1, n2, ans);  
    }  
      
    else if (choice == '/')  
    {  
        if (n2 == 0)
        {  
            printf (" \n Can not be divided by zero, add valid index");  
            scanf ("%d", &n2);        
        }  
        ans = n1 / n2;
        printf (" Division of %d and %d: %.2f", n1, n2, ans);  
    }  
    else  
    {  
        printf(" \n You have entered wrong operator ");  
    }  
    return 0;  
}  