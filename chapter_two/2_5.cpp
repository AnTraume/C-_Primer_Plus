// 2_5.cpp - The source code just for 5 subject in second chapter.



#include "iostream"



int main()
{
    using namespace std;
    long long llPopulation_Country, llPopulation_world;
    cout << "Enter the world's population: ";
    cin >> llPopulation_world;
    cout << "Enter the Contry's population: ";
    cin >> llPopulation_Country;
    cout << "The population of the contry is " << ( double( llPopulation_Country ) / llPopulation_world  ) * 100 << "\% of the world population.\n";

}
