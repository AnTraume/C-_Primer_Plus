// 2_7.cpp - The source code just for 7 subject in second chapter.



#include "iostream"


const double _Cofficient_distant = 0.6214;
const double _Cofficient_oil = 3.875;

int main()
{
    using namespace std;
    double dConsume;
    cout << "Please enter the consume(letre/100km): ";
    cin >> dConsume;
    dConsume = ( ( 100 * _Cofficient_oil ) * _Cofficient_distant ) / dConsume;
    cout << "The car consume : " << dConsume << " mpg.\n";
}

