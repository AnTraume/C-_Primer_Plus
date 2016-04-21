// 1_6.cpp The source program file just for exersice sixth subject in chapter one



#include "iostream"

double Convert(double dYear); // Function declaration  Convert the light year to astronomical units


int main()
{
    using namespace std;
    double dLight_Year;
    cout << "Please enter the number of the light year: ";
    cin >> dLight_Year;
    cout << dLight_Year << " light years = "<< Convert(dLight_Year) << " astronomical units.\n"; //call the Convert funnction
    
}


double Convert(double dYear) // Function definition
{
    return dYear * 63240;
}
