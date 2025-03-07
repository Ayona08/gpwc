#include<iostream>

using namespace std;

class BankAccount{
	private:
		string name;
		double balance;
		
		void deposit(double amount){
			balance += amount;
		}
		void withdraw(double amount){
			balance -= amount;
		}
		
	public:
		void setName(string n){
			name = n;
		}
		void setBalance(double b){
			balance = b;
		}
		string getName(){
			return name;
		}
		double getBalance(){
			return balance;
		}
		void depositMoney(double amount){
			deposit(amount);
		}
		void withdrawMoney(double amount){
			withdraw(amount);
		}
};
int main(){
	BankAccount ba;
	ba.setName("SMiX");
	ba.setBalance(50000);

	cout << "Account Owner: " << ba.getName() << endl;
	cout << "Current Balance: " << ba.getBalance() << endl;
	ba.depositMoney(75000);
	cout << "New Balance after deposit: "<< ba.getBalance() << endl;
	ba.withdrawMoney(5000);
	cout << "New Balance after withdraw: "<< ba.getBalance() << endl;
	
}