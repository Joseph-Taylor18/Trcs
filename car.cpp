#include "car.h"

#include <string>
    using std::string;
#include <iostream>
#include <iomanip>
    using std::setw;

    Vehicle::Vehicle()
    {}
    Vehicle::Vehicle(string brnd, string mdl, int yr, string eng, string fl)
    {
        brand = brnd;
        model = mdl;
        year = yr;
        engine = eng;
        fuel = fl;

    };

    //setters
    void Vehicle::setManufacturer(string brandIs) {brand = brandIs;}
    void Vehicle::setModel(string modelIs) {model = modelIs;}
    void Vehicle::setYear(int yearIs)  {year = yearIs;}
    void Vehicle::setEngine(string engIs)  {engine = engIs;}
    void Vehicle::setFuel (string fuelIs) {fuel = fuelIs;}
    

    //getters
    string Vehicle::getManufacturer() const
     { return brand;}
    string Vehicle::getModel() const
    {return model;}
    int Vehicle::getYear() const
    {return year;}
    string Vehicle::getEngine() const
    {return engine;}
    string Vehicle::getFuel() const
    {return fuel;}

    //overloaded operators
   // using private members of the class.
	ostream& operator<<(ostream& output, Vehicle& veh)
	{
        output << std::setw(10) << veh.brand << std::setw(10)<< veh.model
        << setw(5) <<  veh.year << setw(5) << veh.engine << setw(7) << veh.fuel << endl;
        return output;
	}