// 1_3.cpp exercise for subject 3 in chapter 1


#include "iostream"

void print1();
void print2();  //Function declaration

int main()
{
    print1();
    print1();
    print2();
    print2();
}

// Function definition

void print1()
{
    std::cout << "Three blind mice\n";
}

void print2()
{
    std::cout << "See how they run\n";
}
