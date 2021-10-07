#include<stdio.h>
int add(int a , int b)   //prototype of function//
{
    int c;
    c = a +b;
    return (c);
}
int main()
{
    int x = 2;
    int y = 4;
    int z = add(x,y);  //function call//
    printf("%d",z);
    return 0;
}