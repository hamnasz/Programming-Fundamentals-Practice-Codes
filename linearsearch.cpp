#include <iostream>
using namespace std;
int main ()
{
    int Arr[5];
    cout << " Enter Num:";
    for (int i=1; i<=5; i++)
    cin >> Arr[i];

    int n;
    cout << "Enter Num to search";
    cin >> n;

    bool found = false;

    for (int i=1; i<=5; i++){
        if (Arr[i] == n)
        cout << "Number Found";
        found = true;
        break;
    }
    if(!found)
    cout <<"Not Found";
    return 0;
}