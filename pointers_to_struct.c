struct Rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct Rectangle r ={10,40};
    struct Rectangle *p=&r;
    printf("%d\n",r.length);
    printf("%d\n",(*p).length);
    printf("%d\n",p->length);
    return 0;
}