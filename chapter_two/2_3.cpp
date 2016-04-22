// 2-3.cpp - The code for  subject 3 in second chapter.


#include "iostream"

int main()
{
    const double dCoefficient = 60;
    int nDegrees,nMinutes,nSeconds;
    using namespace std;
    cout << "Please enter a latitude in degress, minutes, and seconds.\n" << "First, enter the degrees: ";
    cin >> nDegrees;
    cout << "Next, enter the minutes of arc: ";
    cin >> nMinutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> nSeconds;
    cout << nDegrees << " degrees" << "," << " " << nMinutes << " minutes, " << nSeconds << " seconds = " << double(nDegrees + (nMinutes / dCoefficient) + (nSeconds / (dCoefficient * dCoefficient))) << " degrees\n";
}
