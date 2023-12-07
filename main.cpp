#include <string>
    using std::string;
#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;

#include <iomanip>
    using std::setw;

#include <vector>
    using std::vector;

#include <fstream>
#include <cstdlib>

#include "car.h"

int main()
{

    //read data
    //first open data file
    std::ifstream infile("data.dat");

    //check infile
    if (!infile)
    {
        std::cerr << "The file could not be opened" << endl;
        exit (EXIT_FAILURE);
    }

    string theBrand = " ";
    string theModel = " ";
    int theYear = 1800;
    string theEngine = " ";
    string theFuel = " ";

    vector <Vehicle*> vehicles;

    while (infile >> theBrand >> theModel >> theYear >> theEngine >> theFuel)
    {
        Vehicle* temp = new Vehicle(theBrand, theModel, theYear, theEngine, theFuel);
        vehicles.push_back(temp);
    }

    for (Vehicle* vehRef : vehicles)
    {
        std::cout << *vehRef;
    }

    infile.close();

    std::ofstream outfile("data.dat", std::ios::app);

    //check infile
    if (!outfile)
    {
        std::cerr << "The file could not be opened" << endl;
        exit (EXIT_FAILURE);
    }

    cout << "please enter the Manufacturer, Model, year, engine, fuel as space delimited quantities\n^d to quit.\n";

    while (cin >>  theBrand >> theModel >> theYear >> theEngine >> theFuel)
    {
        outfile << '\n' << theBrand << ' ' << theModel << ' ' <<theYear << ' ' << theEngine <<' ' << theFuel;
    }

    outfile.close();

    for (Vehicle* vehRef : vehicles)
    {
        delete vehRef;
        vehRef = nullptr;

    }
    return (EXIT_SUCCESS);
};