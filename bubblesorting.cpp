#include <iostream>
using namespace std;
int main ()
{
    int Arr[5];

    cout << "Enter 5 num:";
    for (int i=0; i<5; i++)
    cin >> Arr[i];

    for (int i=0; i<4; i++){
        bool swapped = false;
        for (int j=0; j<4-1; j++){
            if (Arr[j]<Arr[j+1]){
                int temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1]= temp;
                swapped = true;
            }
        }
        if (!swapped)
        break;
    }
    cout << "Sorted Array";
    for (int i=0; i<4; i++){
        cout << Arr[i];
    }
    cout << endl;
}