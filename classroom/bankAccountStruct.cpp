#include<iostream>
using namespace std;

struct BankAccount {
    string accountHolder;
    float balance;

    void deposit(struct BankAccount* account, float amount) {
    account->balance += amount;
    }

    void withdraw(struct BankAccount* account, float amount) {
        if(amount <= account->balance) {
            account->balance -= amount;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

    void accountDetails(struct BankAccount account) {
        cout << "Account Holder: " << account.accountHolder << endl;
        cout << "Balance: " << account.balance << endl;
    }
};



int main(){
    struct BankAccount account = {"Animesh", 90000.0};
    account.accountDetails(account);
    account.deposit(&account, 5000);
    account.accountDetails(account);
    account.withdraw(&account, 20000);
    account.accountDetails(account);
    return 0;
}