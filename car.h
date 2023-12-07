#ifndef Vehicle_
#define Vehicle_

#include <string>
    using std::string;
#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;
    using std::ostream;

class Vehicle
{
    friend ostream& operator<<(ostream&, Vehicle&);

    public:
    Vehicle();
    Vehicle(string, string, int, string, string);

    //setters
    void setManufacturer(string);
    void setModel(string);
    void setYear(int);
    void setEngine(string);
    void setFuel (string);

    //getters
    string getManufacturer() const;
    string getModel() const;
    int getYear() const;
    string getEngine() const;
    string getFuel() const;



    private:
    string brand = " ";
    string model = " ";
    int year = 1800;
    string engine = " ";
    string fuel = " ";

};
#endif