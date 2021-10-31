#include <iostream>
using namespace std;

int main()
{
    double a = 10.01;
    double *b = &a;

    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << b << endl;

    cout << "The value of a is " << a << endl;
    cout << "The value of a is " << *b << endl;

    // Pointer to Pointer
    double **c = &b;

    cout << "The address of b is " << &b << endl;
    cout << "The address of b is " << c << endl;

    cout << "The value at b is " << b<<endl;
    cout << "The value at b is " << *c<<endl;
    cout<<"The value of a is "<<**c<<endl;

    return 0;
}