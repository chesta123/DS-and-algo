#include<stdio.h>
void array(int A[],int n)
{
    A[3]=23;
    int i;
    for ( i = 0; i < n ; i++)
    {
        printf("%d\n",A[i]);
    }
}
int main()
{
    int A[5]={1,2,3,4,5};
    array(A,5);
}


                   // function returning an array//

#include<stdio.h>
int [] array(int n)
{
    int *p;
    p= (int*)malloc(n*sizeof(int));
    return(p);
}
int main()
{
    int *A;
    array(5);
    return 0;
}