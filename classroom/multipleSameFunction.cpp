#include<iostream>
using namespace std;

namespace Lib1{
    void myName(){
        cout<<"My name is Animesh."<<endl;
    }
}

namespace Lib2{
    void myName(){
        cout<<"My name is Kanha."<<endl;
    }
}

int main(){
    Lib1::myName();
    Lib2::myName();
    return 0;
}