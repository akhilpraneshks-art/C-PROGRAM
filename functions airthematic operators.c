#include <stdio.h>
void add(int a, int b) 
{ 
    printf("Sum: %d\n", a + b); 
    
}
void sub(int a, int b)
{
    printf("Sub: %d\n", a - b); 
    
}
void mul(int a, int b) 
{
    printf("Mul: %d\n", a * b);
    }
void dvd(int a, int b)
{
    printf("Div: %f\n", a / b);
    }
void mod(int a, int b)
{ 
    printf("Mod: %d\n", a % b);
    }
int main()
{
    int a, b;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    add(a, b); sub(a, b); mul(a, b); dvd(a, b); mod(a, b);
    return 0;
}