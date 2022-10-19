#include "Showroom.h"
#include <vector>
#include <string>

using namespace std;
Showroom::Showroom()
{
	name = "unnamed Showroom";
	capacity = 0;
	//vector<Vehicle> Cars;
	WHYISMYVECTORNULL = 0;
}
Showroom::Showroom(string name = "Unnamed Showroom", unsigned int capacity = 0)
{
	this->name = name;
	this->capacity = capacity;
	WHYISMYVECTORNULL = 0;
}
 const vector<Vehicle>& Showroom::GetVehicleList() const
{
	//Cars<Vehicle> Carsf();
	//vector<Cars> Carsf();
	//Vehicle x = func(Cars);
	// vector<Vehicle> Cars;
	 return Cars;
}
 void Showroom::AddVehicle(const Vehicle& v)
{
	//unsigned int i = 0;
	if (WHYISMYVECTORNULL == capacity)
	{
		cout << "Showroom is full! Cannot add ";
		cout << v.GetYearMakeModel();
	}
	else if (WHYISMYVECTORNULL < capacity)
	{
		Cars.push_back(v);
		//new Vehicle;//possible cause of null vector. Compare this with Cars.pushback(v)
		//i++;
		WHYISMYVECTORNULL++;
	}

}
void Showroom::ShowInventory() const
{
	
	//for (int i = 0; i < WHYISMYVECTORNULL; i++)
	//{
	//Cars;
		if (Cars.size() == 0)
		{
			cout << name << " is empty!" << endl;
		}
		else
		{
			cout << "Vehicles in " << name << endl;
			for (unsigned int i = 0; i <Cars.size(); i++)
			//cout << "come on";
			Cars.at(i).Display();
			//Cars[i].Display();
			//Cars[1].Display;
		}
	//}
}

