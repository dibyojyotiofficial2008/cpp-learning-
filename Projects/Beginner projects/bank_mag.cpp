#include <iostream>
using namespace std;
string accountHolderName;
int accountNumber;
double accountBalance;
bool isActive = false;

// functions part


void welcomeDisplay() {
    cout << "Welcome to the Bank Management System!" << endl;
    cout << "======================================" << endl;
}
void showMenu() {
    cout << "1. Create Account" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Check Balance" << endl;
    cout << "5. Account Details" << endl;
    cout << "6. Exit" << endl;
}

void createAccount() {
    cout << "Enter account holder name: ";
    cin >> accountHolderName;
    if (accountHolderName.empty()) {
        cout << "Account holder name cannot be empty!" << endl;
        return;
    }
    else if (accountHolderName::isalpha() == false) {    // Error : isalpha  need to use loop 
        cout << "Account holder name must contain only letters!" << endl;
        return;
    }
    else if (accountHolderName.length() < 3) {
        cout << "Account holder name must be at least 3 characters long!" << endl;
        return;
    }
    else if (accountHolderName.length() > 50) {
        cout << "Account holder name cannot exceed 50 characters!" << endl;
        return;
    }
    getline (cin, accountHolderName); 


    cout << "Enter account number: ";
    cin >> accountNumber;
    if (accountNumber < 0) {
        cout << "Account number cannot be negative!" << endl;
        return;
    }
    else if (accountHolderName.empty()) {
        cout << "Account holder name cannot be empty!" << endl;
        return;
    }
    else if (accountNumber == 0) {
        cout << "Account number cannot be zero!" << endl;
        return;
    }
    else if ( int(accountNumber) < 0 ) {
        cout << "Account number must be a positive number!" << endl;
        return;
    }
    else if (accountNumber::isdigit() == false) {   // need to use loop to check each digit
        cout << "Account number must contain only digits!" << endl;
        return;
    }


    cout << "Enter initial balance: ";
    cin >> accountBalance;
    if (accountBalance < 0) {
        cout << "Initial balance cannot be negative!" << endl;
        return;
    }
    else if (double(accountBalance) < 0) {
        cout << "Initial balance must be a positive number!" << endl;
        return;
    }


    isActive = true;
    cout << "Account created successfully!" << endl;
}
void AccountChecker()
{
    if (isActive)
    {
        cout << "Account already exists!" << endl;
        return;
    }

    createAccount();
}

void deposit() {
    if (isActive == false) {
        cout << "Account is not active. Please create an account first." << endl;
        return;
    }
    double amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;
    if (amount < 0) {
        cout << "Deposit amount cannot be negative!" << endl;
        return;
    }
    accountBalance += amount;
    cout << "Amount deposited successfully!" << endl;
}
void withdraw() {
    if (isActive == false) {
        cout << "Account is not active. Please create an account first." << endl;
        return;
    }
    double amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;
    if (amount < 0) {
        cout << "Withdrawal amount cannot be negative!" << endl;
        return;
    }
    if (amount > accountBalance) {
        cout << "Insufficient balance!" << endl;
    } else {
        accountBalance -= amount;
        cout << "Amount withdrawn successfully!" << endl;
    }
}
void checkBalance() {
    if (isActive == false) {
        cout << "Account is not active. Please create an account first." << endl;
        return;
    }
    cout << "Account balance: " << accountBalance << endl;
}
void accountDetails() {
    if (isActive == false) {
        cout << "Account is not active. Please create an account first." << endl;
        return;
    }
    cout << "Account Holder Name: " << accountHolderName << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Account Balance: " << accountBalance << endl;
}
 
// main 

int main() {
    welcomeDisplay();
    int choice;
    do {
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                AccountChecker();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                checkBalance();
                break;
            case 5:
                accountDetails();
                break;
            case 6:
                cout << "Thank you for using the Bank Management System!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}

// Things to improve:
// 1. show menu function
// 2. preven t negative deposit and withdraw
// 3. prevent withdraw more than balance
// 4. prevent creating account with negative balance
// 5. prevent creating account with empty name
// 6. prevent creating account with negative account number
// 7. Prevent creating second account if one already exists
