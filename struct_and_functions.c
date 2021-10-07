#include<stdio.h>
struct rectangle
{
    int length;
    int breadth;
};


 void initialize(struct rectangle *r,int l , int b)
 {
     r->length=l;
     r ->breadth=b;
 }
//call by address//


 int area(struct rectangle r)
 {
     return r.length*r.breadth;
 }
//call by value//


 void change_length(struct rectangle *r,int l)
 {
     r->length = l;
 }
 //call by address//


 int main()
 {
    struct rectangle r;
    initialize(&r,10,15);
    area(r);
    printf("%d\n",area(r));
    change_length(&r,30);
    printf("%d\n",r.length);
    printf("%d",area(r));
    return 0;
 }
