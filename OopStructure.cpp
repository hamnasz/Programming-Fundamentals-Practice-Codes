#include <iostream>
using namespace std;
struct vehical //declaration structure
{
    string brand;
    string model;
    int years;
};
int main (){
    vehical car; //define structure variable
    //Acessing number of structure

    cout << "Enter Car Brand:" << endl;
    cin >> car.brand;

    cout << "Enter Car Model:" << endl;
    cin >> car.model;

    cout << "Enter Years of issue: " << endl;
    cin>> car.years;
}