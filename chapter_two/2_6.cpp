// 2_6.cpp - The source code just for 6 subject in second chapter.



#include "iostream"


int main()
{
    using namespace std;
    double dDistant,dOil_consumption;
    cout << "Please enter the dDistant(km): ";
    cin >> dDistant;
    cout << "Please enter the dOil_consumption(litre): ";
    cin >> dOil_consumption;
    cout << "The car consume " << (dOil_consumption / dDistant) * 100 << " letre/100km\n";
}
