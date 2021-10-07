struct card
{
    int face;
    int color;
    int shape;
};
//till here we created a database named card and datatype structure//
int main()
{
    struct card deck[52]={{0,1,2},{1,2,3},{3,4,6}};
//here we have created array of structures just like we create array of numbers in int a[52]//
    printf("%d",deck[2].face);
    return 0;
}