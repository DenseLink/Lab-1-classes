#include "Vehicle.h"

using namespace std;
#include <string>
#include <iostream>
Vehicle::Vehicle()
{
	make = "COP3503";
	model = "Rust Bucket";
	year = 1900;
	price = 0.0;
	mileage = 0;
}
Vehicle::Vehicle(string make, string model, int year, float price, int mileage)
{
	this->make = make;
	this->model = model;
	this->year = year;
	this->price = price;
	this->mileage = mileage;
}
void Vehicle::Display() const
{

	//cout << "Make:	Model:	Year:	Price:	Mileage:" << endl;
	cout << year << "	" << make << "	" << model << "	" << "$" << price << "	" << mileage << endl;

}
string Vehicle::GetYearMakeModel() const
{

		//cout << "Year:	Make:	Model:" << endl;
		cout << year << "	" << make << "	" << model << endl;
		string emptyValue = "";
		return emptyValue;
}
float Vehicle::GetPrice() const
{
	//cout << price;
	return price;
}
