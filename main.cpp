#include <iostream>
#include <string>
#include <iomanip> //biblioteka skirta tikslumui nustatyti
using namespace std;

int main()
{
    cout << "Hello, World!" <<endl;

    int paz1, paz2, paz3, paz4, paz5;
    float vidurkis;

    cout << "Mokinio ivertinimai: "<<endl;
    cin>> paz1>>paz2>>paz3>>paz4>>paz5;
    float vidurkis = (paz1+paz2+paz3+paz4+paz5) / 5;
    cout <<"Vidurkis: "<<endl;

}
