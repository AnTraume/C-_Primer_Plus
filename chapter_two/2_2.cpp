// 2_2.cpp - The code just for second subject in second chapter.


#include "iostream"

const double _Coefficient_meter_ = 0.0254;// The coefficient is the inch convert to meter.
const int _Coefficient_inch_ = 12; //The coeffient is the feet convert to inch.
const double _Coefficient_kilogram_ = 2.2; //The coefficient for pound to kilogram.
int main()
{
    using namespace std;
    int nHeight_feet,nHeight_inch;
    double dWeight;
    cout << "Please enter your height(feet):__\b\b";
    cin >> nHeight_feet;
    cout << "Please enter your height(inch)__\b\b";
    cin >> nHeight_inch;
    cout << "Please enter your weight(pound)__\b\b";
    cin >> dWeight;
    cout << "Your height is" << " " << (nHeight_feet * _Coefficient_inch_ + nHeight_inch) * _Coefficient_meter_ << " meter and your weight is " << dWeight / _Coefficient_kilogram_  << " kg "
       << "and your BMI is " << dWeight /  ( _Coefficient_kilogram_ *( ( nHeight_feet * _Coefficient_inch_ + nHeight_inch ) * _Coefficient_meter_ ) * ( ( nHeight_feet * _Coefficient_inch_+ nHeight_inch ) * _Coefficient_meter_ )  )<< ".\n";



}
