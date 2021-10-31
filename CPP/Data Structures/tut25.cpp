#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
void getdata(void){
    cout<<"Enter the id number "<<endl;
    cin>>id;
    salary = 10000;
}
void displaydata(void){
    cout<<"The id number is "<<id<<endl;
}
};

int main()
{
employee arr[10];
arr[0].getdata();
arr[0].displaydata();

arr[1].getdata();
arr[1].displaydata();

arr[2].getdata();
arr[2].displaydata();

//     OR      //
cout<<endl;
for(int i = 0; i<4; i++){
    arr[i].getdata();
    arr[i].displaydata();
}
    return 0;
}