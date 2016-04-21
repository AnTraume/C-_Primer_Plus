// 2_1.cpp - The source code just for first subject in second chapter.

#include "iostream"

const int _Coefficient_ = 12; //The coeffient is the feet convert to inch.


int main()
{
    using namespace std;
    int nHeight;
    cout << "Please enter the your height:___\b\b\b";
    cin >> nHeight;
    cout << "Your Height is " << nHeight << " feet" << " or " << nHeight * _Coefficient_ << " inch.\n";
}
