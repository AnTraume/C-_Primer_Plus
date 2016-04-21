// 1_5.cpp The cource code file just fot exersice the fifth subject in chapter one


#include "iostream"


double ConvertTemperature_C_To_F(double dTemperature_C); // Function declaration

int main()
{
    using namespace std;
    double dTemperature;
    cout << "Please enter the temperature(C) : ";
    cin >> dTemperature;
    cout << "The temperature is " << ConvertTemperature_C_To_F(dTemperature) << " F.\n";
    
}

double ConvertTemperature_C_To_F(double dTemperature_C) // Function definition
{
    return 1.8 * dTemperature_C + 32;
}
