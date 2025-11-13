#include <string>

class Account 
{

public:

	explicit Account(std::string accountName): name{accountName}{}
		

	void getDeposit(int deposit)
	{
		if (deposit > 0)
		{
			balance += deposit;
		}
	}

	std::string getAccountName()
	{
		return name;
	}

	std::string setAccountName(std::string name) {
		return name;
	}

	int getBalance()
	{
		return balance;
	}

	int getWhitDraw(int whitDrawAmount)
	{
		if (whitDrawAmount > 0)
		{
			balance -= whitDrawAmount;
		}
	}

private:
	std::string name;
	int deposit{0};
	int balance{ 0 };
};