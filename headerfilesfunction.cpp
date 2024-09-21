#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
     double a=9, b=4, z;
     z = pow (4, 9);
     cout << "Power: " << z << endl;

     z = sqrt(4);
     cout << "Square Root: " << z << endl;

     z = abs (-8); /*if you give neg value then 
     it will give you positive value of that num*/
     cout << "Absolute Value: " << z << endl;

     z = round (89.9);
     cout << "Decimal Place: " << z << endl;
}