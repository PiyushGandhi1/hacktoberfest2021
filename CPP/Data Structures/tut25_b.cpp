#include <iostream>
using namespace std;

class multiplication
{
    int a;
    int b;
    int c;

public:
    void setdata(int x1, int x2, int x3)
    {
        a = x1;
        b = x2;
        c = x3;
    }
    void getdata()
    {
        cout << "Multiplication of the given numbers is " << a * b * c << endl;
    }
    void data(multiplication y1, multiplication y2)
    {
        cout << "Multiplication of the given first input number of the every object " << (y1.a) * (y2.a) << endl;
        cout << "Multiplication of the given second input number of the every object " << (y1.b) * (y2.b) << endl;
        cout << "Multiplication of the given third input number of the every object " << (y1.c) * (y2.c) << endl;
    }
};

int main()
{
    multiplication y1, y2, y3;
    y1.setdata(2, 3, 4);
    y1.getdata();

    y2.setdata(4, 9, 16);
    y2.getdata();

    y3.data(y1, y2);
    return 0;
}