#include "Dealership.h"
#include <vector>
#include <string>
using namespace std;

Dealership::Dealership()
{
	name = "Generic Dealership";
	capacity = 0;
	Counter = 0;
	//numberOfShowrooms = 0;
}
Dealership::Dealership(string name = "Generic Dealership", unsigned int capacity = 0)
{
	this->name = name;
	this->capacity = capacity;
	Counter = 0;
}
void Dealership::AddShowroom(const Showroom &s)
{
	//unsigned int i = 0;
	if (Counter == capacity)
	{
		cout << "Dealership is full, can't add another showroom!" << endl;
	}
	else if (Counter < capacity)
	{
		Shows.push_back(s);
		//new Vehicle;//possible cause of null vector. Compare this with Cars.pushback(v)
		//i++;
		Counter++;
	}

}

float Dealership::GetAveragePrice() const
{
	float averagePrice = 0.0;
	//float price1 = 0.0;
	float price2Output = 0.0;
	float numberOfLoops = 0.0;
	for (unsigned int i = 0; i < Shows.size(); i++)
	{
		vector<Vehicle> Cars = Shows[i].GetVehicleList();
		for (unsigned int j = 0; j < Cars.size(); j++)
		{
			float price1 = Cars[j].GetPrice();
			//float price1 = Cars.at(j).GetPrice();
			//string convertPrice1 = to_string(price1);
			//float price2 = stof(convertPrice1);
			
			averagePrice = averagePrice + price1;
			//averagePrice = 4.0;
			numberOfLoops = numberOfLoops + 1.0;
			//j++;
			/*cout << "The car price " << price1 << "end point" << endl;
			int price2 = price1 + 2;
			cout << price2 << endl;*/
		}
		//i++;
		//cout << "Im here" << endl;
	}
	if (numberOfLoops == 0)
	{
		return averagePrice;
	}
	else
	{
		price2Output = averagePrice / numberOfLoops;
		return price2Output;
	}
}


void Dealership::ShowInventory() const
{

	//for (int i = 0; i < WHYISMYVECTORNULL; i++)
	//{
	//Cars;
	if (Shows.size() == 0)
	{
		cout << name << " is empty!" << endl;
		cout << "The average car price: $" << GetAveragePrice() << endl;
	}
	else
	{
		for (unsigned int i = 0; i < Shows.size(); i++)
		{	//cout << "come on";
			Shows.at(i).ShowInventory();
			//Cars[i].Display();
			//Cars[1].Display;
		}
		//cout << "The car price: $" << GetAveragePrice() << endl;
		cout << "Average car price: $" << GetAveragePrice();
	}
	//}
}