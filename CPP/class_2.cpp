#include<iostream>
#include<string>
using namespace std;

class binary {
private :
string s;
void check_binary(void);
public:
void input(void);
// void check_binary(void);
void ones_compliment(void);
void display(void);

};

void binary :: input(){
    
    cout<<"Enter the binary number "<<endl;
    cin>>s;
}

void binary :: check_binary(){
      for(int i = 0; i< s.length(); i++){
        if(s.at(i)!='1' && s.at(i)!='0'){
            cout<<"Incorrect binary input ";
           exit(0);
        }
    }
}

void binary :: ones_compliment(){
    check_binary();
    for(int i = 0; i<s.length(); i++){
        if(s.at(i)=='1'){
            s.at(i) = '0';
        }
        else {
            s.at(i) = '1';
        }
    }
}

void binary :: display(){
    for(int i = 0; i<s.length(); i++){
        cout<<s.at(i);
    }
    cout<<endl;
}

int main(){
    binary number;
number.input();
// number.check_binary();
cout<<"Entered binary number is: "<<endl;
number.display();
number.ones_compliment();
cout<<"After complimenting the entered binary number: "<<endl;
number.display();

return 0;
}