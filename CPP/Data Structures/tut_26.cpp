#include <iostream>
using namespace std;

class coordinates
{

    int a, b;

public:

    void getdata(int x , int y)
    {
       a = x;
       b = y;
    }
    void displaydata(void)
    {
        cout << "Entered co-ordinates are " << a << " and " << b << endl;
    }
            friend coordinates multi(coordinates, coordinates);

};

coordinates multi(coordinates p , coordinates q){
    coordinates no3;
    cout<<"Multiplication of x of both the entered number is "<<((p.a) + (q.a))<<endl;
    cout<<"Multiplication of y of both the entered number is "<<((p.b) + (q.b))<<endl;
    no3.getdata((p.a) + (q.a),(p.b) + (q.b));
    return no3;
}

int main()
{
    coordinates p, q,sum;
    q.getdata(1, 2);
    q.displaydata();

    p.getdata(4, 5);
    p.displaydata();

  sum = multi(p, q);
  sum.displaydata();
    return 0;
}
