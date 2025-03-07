#include<iostream>
#include<cstdlib>

using namespace std;

class Test{
	int *ptr;
	public:
		Test(int num);
		void setNumber(int num);
		int getNumber();	
		void printNumber();
};

Test :: Test(int num){
	ptr = new int;
	*ptr = num;
}
void Test :: setNumber(int num){
	*ptr = num;
}
int Test :: getNumber(){
	return *ptr;
}
void Test :: printNumber(){
	cout << "Number: "<< *ptr << " Address: "<< ptr<<endl;
}

int main(){
	Test t1(10);
	t1.printNumber();
	t1.setNumber(20);
	t1.printNumber();
}
