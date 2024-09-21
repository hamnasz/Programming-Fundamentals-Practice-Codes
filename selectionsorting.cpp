#include <iostream>
using namespace std;
int main (){
    int arr[5];
    cout << "Enter Numbers in irregular order:";
    for (int i=0; i<4; i++)
    cin >> arr[i];

    for (int i=0; i<=5; i++){
        for (int j=i; j<5; j++)
        if(arr[j]<arr[i]){
            swap(arr[j],arr[i]);
        }
    } 
    cout << "Sorted Numbers are:";
    for (int i=0; i<4;i++){
        cout << arr[i];
    }
    cout << endl;
    return 0;
}