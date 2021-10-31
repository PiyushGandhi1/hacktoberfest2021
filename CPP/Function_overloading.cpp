#include<iostream>
using namespace std;

class solution{

int multiply(int a,int b ,int c){
    return a*b*c;
}

int multiply(int a, int b){
    return a*b;
}
};

int main(){
     solution obj;
     cout<<multiply(5, 10);
     cout<<obj.multiply(1, 2 ,3);
     return 0;
}