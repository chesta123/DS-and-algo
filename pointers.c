// pointers are used to access the data which is out of range of program like in heap memory //

#include<stdio.h>
int main()
{
    int a=10; //variable//
    int *p; //pointer variable ; declaration//
    p=&a;   //initialisation//
    printf("%d\n",a);
    printf("%d\n",*p);  //dereferencing//
    printf("%d",p);
}