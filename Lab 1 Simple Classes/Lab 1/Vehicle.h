#pragma once
using namespace std;
#include <string>
#ifndef VEHICLE_H_
#define VEHICLE_H_


//string make;//store the make of the vehicle
//string model;// store the model of the vehicle
//
//int year;// store the year of the car
//float price;// store the price
//int mileage;

class Vehicle
{
private:
	string make;//store the make of the vehicle
	string model;// store the model of the vehicle

	unsigned int year;// store the year of the car
	float price;// store the price
	unsigned int mileage;// store the number of miles on the vehicle
public:
	Vehicle();
	Vehicle(string make, string model, int year, float price, int mileage);
	
	void Display() const;

	string GetYearMakeModel() const;

	float GetPrice() const;
};


#endif /* VEHICLE_H_ */