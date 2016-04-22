// 2-4.cpp - The code for  subject 4 in second chapter.

#include "iostream"

const int nDay_Hour = 24; // The coefficient express one day have 24 hours
const int nHour_Minute = 60; // The coefficient express one hour have 60 minutes
const int nMinute_Second = 60; // The coefficient express one minute have 60 seconds

int main()
{
    using namespace std;
    long lSeconds;
    int nDay,nHour,nMinutes,nSeconds;
    cout << "Please enter the number of seconds: ";
    cin >> lSeconds;
    cout << lSeconds << " seconds " << "= " << lSeconds / ( nDay_Hour * nHour_Minute * nMinute_Second )<< "days, " << (lSeconds % ( nDay_Hour * nHour_Minute * nMinute_Second )) / ( nHour_Minute * nMinute_Second ) << " hours, "
        << ( (lSeconds % ( nDay_Hour * nHour_Minute * nMinute_Second )) % ( nHour_Minute * nMinute_Second ) ) / nHour_Minute << " minutes, " << ( (lSeconds % ( nDay_Hour * nHour_Minute * nMinute_Second )) % ( nHour_Minute * nMinute_Second ) ) % nHour_Minute <<  " seconds\n"; 
}
