#include <stdio.h>
class rectangle
{
    private:
    int length;
    int breadth;

    public:
    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }

    void change_length(int l)
    {
        length = l;
    }
};

int main()
{
    rectangle r(10,20);
    r.area();
    r.change_length(30);
    return 0;
}