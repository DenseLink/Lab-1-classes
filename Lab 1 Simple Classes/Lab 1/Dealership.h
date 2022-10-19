#pragma once
using namespace std;
#include <string>
#include <iostream>
#include "Vehicle.h"
#include <vector>
#include "Showroom.h"


class Dealership
{
private:
	vector<Showroom> Shows; //This vector stores the different showrooms
	string name; //The name of the Dealership
	unsigned int capacity; //a max number of showrooms in the dealership
	unsigned int Counter;
public:
	//Constructor 
	Dealership();
	Dealership(string name, unsigned int capacity);
	//Dealership(string name = "Generic Dealership", unsigned int capacity = 0);

	//Bejavoprs
	void AddShowroom(const Showroom &s);
	float GetAveragePrice() const;
	void ShowInventory() const;
};

