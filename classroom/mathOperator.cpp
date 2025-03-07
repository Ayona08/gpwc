#include<iostream>

using namespace std;

/*
uses of namespace:

1.making code readable
2.organises the code
3.helps avoides name conflicts
*/

namespace Operator{
    void add(int a, int b){
        cout<<"Sum is "<<a+b<<endl;
    }

    void sub(int a, int b){
        cout<<"Difference is "<<a-b<<endl;
    }

    void mul(int a, int b){
        cout<<"Product is "<<a*b<<endl;
    } 

    void div(int a, int b){
        if(b!=0){
            cout<<"Quotient is "<<a/b<<endl;
        }else{
            cout<<"Error! Division by zero is not allowed"<<endl;
        }
    }
}

namespace Student{
    void studentData(string name, int regdNum){
            cout<<"Name: "<<name<<endl;
            cout<<"Registration Number: "<<regdNum<<endl;
    }
}

int main(){
    int num1;
    int num2;
    string name;
    int regdNum;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your registration number: ";
    cin>>regdNum;
    Operator::add(num1, num2);
    Operator::sub(num1, num2);
    Operator::mul(num1, num2);
    Operator::div(num1, num2);
    Student::studentData(name, regdNum);
    return 0;
}
