#include <string>

class Inovice
{
public:
	// intializing Product Part number and describtion and price of the product alongside validating price.
	explicit Inovice(std::string PartNumberN, std::string PartDescribtionName, int priceInitialization):
	PartNumber{PartNumberN}
	{
		if (PricePerItem > 0)
		{
			PricePerItem = priceInitialization;		
		}
		PartDescribtion = PartDescribtionName;
	}
// functions to get or change partnumber
	std::string const getPartNumber()
	{
		return PartNumber;
	}

	std::string setPartNumber(std::string PartNumber)
	{
		return PartNumber;
	}
// functions to get or change partdescribtion
	std::string const getPartDescribtion ()
	{
		return PartDescribtion;
	}
// calculating the final price icluding tax and discount per item
	double const FinalPriceProduct()
	{
		int sum = (VAT * PricePerItem + PricePerItem) - (PricePerItem - DiscountRate * PricePerItem) ;
		sum *= quantity;
		return sum;
	}

//quantity counting for the source file.
	int const quantityCounter(int quantityAmount)
	{
		if (quantityAmount > 0){
		quantity = 0;
		quantity += quantityAmount;	
		}
		
		return quantity;
	}

private:
	std::string PartNumber;
	std::string PartDescribtion;
	int quantity{1};
	int PricePerItem;
	double VAT{0.2};
	double DiscountRate{0.5};
	

};
