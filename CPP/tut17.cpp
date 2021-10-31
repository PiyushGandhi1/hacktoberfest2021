#include<iostream>
using namespace std;

inline int product(int a, int b){ // inline means the product function is send to the main function
    static int c = 0;  // This executes only once
    c = c + 1;
        return a*b + c;
    }

int main(){
    
   int a,b;
   cout<<"Enter the two numbers "<<endl;
   cin>>a>>b;
   cout<<"Product to two entered numbers "<<product(a,b)<<endl;

return 0;
}