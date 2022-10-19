#pragma once
using namespace std;
#include <string>
#include <iostream>
#include "Vehicle.h"
#include <vector>


class Showroom {
private:
	string name;//name of the showroom
	vector<Vehicle> Cars;//a vector<Vehicle> to store Vehicle objects
	unsigned int capacity;//a maximum capacity of the showroom
	unsigned int WHYISMYVECTORNULL;

public:
	//Default constructor (all parameters have default values
	//vector<Vehicle> Cars;
	Showroom();
	Showroom(string name, unsigned int capacity);
	//Showroom(string name = "Unnamed Showroom", unsigned int capacity = 0);

	//Accessor
	const vector<Vehicle>& GetVehicleList() const;

	//Behaviors
	void AddVehicle(const Vehicle& v);
	void ShowInventory() const;

};