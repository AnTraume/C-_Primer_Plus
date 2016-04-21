// 1_7.cpp The source program file just for exercise seventh subject in chapter one



#include    "iostream"
using namespace std;


void print_time(int nHours,int nMinutes); // Function declaration  print the time


int main()
{
    int nHours,nMinutes;
    cout << "Please enter the number of hours: ";
    cin >> nHours;
    cout << "Please enter the number of minutes:  ";
    cin >> nMinutes;
    print_time(nHours,nMinutes);
}



void print_time(int nHours,int nMinutes) // Function definition
{
    cout << "Time :"<< nHours << ":" << nMinutes << "\n";
}
