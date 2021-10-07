//using call by value method//
#include <stdio.h>
struct rectangle
{
    int length;
    int breadth;
};

int area(struct rectangle r1)
//note: for call by reference just add * before r1 in above line//
{
    length = length+1;
    //above changes will not be executed in case of call by value and length will remain same//
    return (r1.length * r1.breadth);
}

int main()
{
    struct rectangle r = {3, 4};
    area(r);
    printf("%d",area(r));
    return 0;
}



// call by address (will change the value of variables if done)//

#include <stdio.h>
struct rectangle
{
    int length;
    int breadth;
};

void change_length(struct rectangle *r1,int l)
{
    (*r1).length = l;
    // or r1 -> length = l;
}

int main()
{
    struct rectangle r={19,45};
    change_length(&r,50);
    printf("%d",r.length);
    return 0;
}