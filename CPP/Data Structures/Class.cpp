#include<iostream>
using namespace std;

class Mobile{

private:
int battery, MP;
float size;
public:
int price;


void data(int battery1, int MP1, float size1);
void displaydata();
};

void Mobile :: data(int battery1, int MP1, float size1){
    battery = battery1;
    MP = MP1;
    size = size1;
}

void Mobile :: displaydata(){
    cout<<"The battery of the mobile is of "<<battery<<endl;
    cout<<"The MP of the mobile is of "<<MP<<endl;
    cout<<"The size of the mobile is of "<<size<<endl;
    cout<<"The price of the mobile is of "<<price<<endl;
}

int main(){
    Mobile Asus;
    Asus.price = 11000;
 Asus.data(4000, 12, 6.4);
 Asus.displaydata();
}