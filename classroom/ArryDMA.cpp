#include<iostream>
#include<cstdlib>

using namespace std;

class TestArr{
	int *arr;
	int size;
	
	public:
		TestArr(int size){
			this -> size = size;
			arr = new int[size];
		}
		
		void insertElement(){
			for(int i = 0; i < size; i++){
				cin >> arr[i];
			}
		}
		
		void printElement(){
			for(int i = 0; i < size; i++){
				cout << "Address: "<< arr[i] << " Element: " << &arr[i] << endl;
			}
		}
		
		~TestArr() {
        	delete[] arr; 
    	}
	
};
int main(){
	int n;
	cout << "Enter size of array: " << endl;
	cin >> n;
	
	TestArr t(n);
	cout << "Enter array elements: "<< endl;
	t.insertElement();
	t.printElement();
	
	return 0;
}
