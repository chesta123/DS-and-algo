#include<stdio.h>
void swap(int x,int y)
{
    int temp = x;
    x=y;
    y=temp;
}
int main()
{
    int a =10;
    int b=20;
    swap(a,b);
    printf("%d,%d",a,b);
}
/*when the compiler will go to swap function it will reverse the value of a and b . but since
the function is not returning anything so the compiler will tke away nothing from there and 
hence a and b will remain same */
