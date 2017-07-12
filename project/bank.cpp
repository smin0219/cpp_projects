#include "bank.h"

Account userAccounts[100];
int numberOfAccounts = 0;

/* Print main menu for the system */

void printMenu(){
	cout<<"-----MENU-----"<<endl;
	cout<<"1. Create Account"<<endl;
	cout<<"2. Deposit"<<endl;
	cout<<"3. Withdraw"<<endl;
	cout<<"4. Print Account Info"<<endl;
	cout<<"5. Exit Program"<<endl;

}

void maintainUserAccount() {
}

/* I/O for the program */
void selectOption() {
 	int option = 0;

  do{
    cout << "Choose option and press enter: ";
    cin >> option;

        switch (option){
			case 1: saveAccount(createAccount());break;
			case 2: cout<<"2"<<endl;break;
			case 3: cout<<"3"<<endl;break;
			case 4: printEntireAccounts();break;
			case 5: cout<<"Exit Program"<<endl;break;
			default:
				cout<<"Invalid option"<<endl;
				wrongTypeHandler();
		}
	}while(option!=5);
}

Account createAccount(){
	Account account;
	bool valid = false;

	cout<<endl<<"		[Create Account]	"<<endl<<endl;

	while(!valid){
		cout<<"Enter Account Number: ";
		cin>>account.accountNumber;
		if(cin.fail()){
			wrongTypeHandler();
		}
		else{
			valid = true;
		}
	}

	valid = false;

	cin.ignore();

	cout<<"Enter User Name: ";
	getline(cin,account.customerName);
	
	while(!valid){
		cout<<"Enter User Deposit: ";
		cin>>account.balance;
		if(cin.fail()){
			wrongTypeHandler();
		}
		else{
			valid = true;
		}
	}

	account.isEmpty = true;

	valid = false;
	
	return account;
}

void saveAccount(Account account){
	userAccounts[numberOfAccounts] = account;
	numberOfAccounts++;
}

void printEntireAccounts(){
	for(int i=0; i<numberOfAccounts; i++){
			cout<<"Account Number: "<<userAccounts[i].accountNumber<<endl;
			cout<<"Customer Name: "<<userAccounts[i].customerName<<endl;
			cout<<"Balance: "<<userAccounts[i].balance<<endl;

	}
}

void wrongTypeHandler() {
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

