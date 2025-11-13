#include <iostream>
#include <string>
#include "Account.h"
using namespace std;

int main()
{
	/*cout << "Hello this is keyarmin's bank.\nplease enter your account name: ";
	string accountName;
	cin >> accountName;*/
	Account account1{ "Keyarmin Ardeshiri Lajimi" };
	
	cout << "Hello Mr." << account1.getAccountName() << "\nWelcome to your account" << endl;
	cout << "Please enter what is your request?\n1)Deposit\n2)Balance\n3)Whitdraw" << endl;
	int choice;
	cin >> choice;

	if (choice == 1)
	{
		cout << "How much do you wanna deposit in your account? $";
		int depositAmount;
		cin >> depositAmount;
		account1.getDeposit(depositAmount);
		cout << "Alright your new account's balances is: $" << account1.getBalance() << endl;

	}

	if (choice == 2)
	{
		cout << "Your Current Balance is: $" << account1.getBalance() << endl;
	}
	
	if (choice == 3)
	{
		int balance = account1.getBalance();
		int whitDrawAmount;
		cout << "Alright please enter the whitdraw amount: $";
		cin >> whitDrawAmount;
		if (whitDrawAmount >> account1.getBalance())
		{
			cout << "Sorry The amount requested is more than balance"<< endl;
		}
		cout << "Done.\nYour new balance is: $" << account1.getBalance();
	}


	return 0;

}
