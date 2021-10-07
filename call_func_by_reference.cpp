#include<stdio.h>
void swap(int &x,int &y)
//calling function by reference , we r just giving another name to a and b as x and y//          
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