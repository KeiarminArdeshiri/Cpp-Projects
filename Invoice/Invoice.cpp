#include <iostream>
#include <string>
#include "Invoice.h"
using namespace std;

int main()
{
	int totalPrice = 0;
	Inovice Product1{"1", "StarWars Battlefront 2 Delux Edition",100};
	Inovice Product2{"2", "Ps5 Gaming Console", 700};
	cout << "Hello Welcome to this shop!" << endl;
	cout << "Here are the products we can sell:" << endl;
	cout << "Product number" << "\tProduct Describtion" << "\t\t\t\tProduct final Price" << endl;
	cout << Product1.getPartNumber() << "\t\t\t\t" << Product1.getPartDescribtion() << "\t" << "$" << Product1.FinalPriceProduct() << endl;
	cout << Product2.getPartNumber() << "\t\t\t\t" << Product2.getPartDescribtion() << "\t\t\t" << "$" << Product2.FinalPriceProduct() << endl;
	cout << "Witch one do you wnat?(1 or 2)" << endl;
	int choice;
	cin >> choice;
	if (choice == 1)
	{
		cout << "Alirght!! how many do you want?" << endl;
		int amount;
		cin >> amount;
		cout << "Do you wanna the other product too? " << endl;
		string answer;
		cin >> answer;
		if (answer == "yes")
		{
			cout << "Alirght!! how many do you want?" << endl;
			int amount2;
			cin >> amount2;
			int TotalAmount = amount + amount2;
			Product1.quantityCounter(TotalAmount);
			cout << "The final Price is: $" << Product1.FinalPriceProduct()<<endl;
		}
		if (answer == "no")
		{
			int TotalAmount = amount;
			Product1.quantityCounter(TotalAmount);
			cout << "The final Price is: $" << Product1.FinalPriceProduct() << endl;
		}

	}
	if (choice == 2)
	{
		cout << "Alirght!! how many do you want?" << endl;
		int amount;
		cin >> amount;
		cout << "Do you wanna the other product too? " << endl;
		string answer;
		cin >> answer;
		if (answer == "yes")
		{
			cout << "Alirght!! how many do you want?" << endl;
			int amount2;
			cin >> amount2;
			int TotalAmount = amount + amount2;
			Product1.quantityCounter(TotalAmount);
			cout << "The final Price is: $" << Product2.FinalPriceProduct() << endl;
		}
		if (answer == "no")
		{
			int TotalAmount = amount;
			Product1.quantityCounter(TotalAmount);
			cout << "The final Price is: $" << Product2.FinalPriceProduct() << endl;
		}
	}
}
