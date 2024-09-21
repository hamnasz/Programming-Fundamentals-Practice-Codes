#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;

    int answer = 0;
    int power = 1;

    while (n>0){
        int parityDigit = n%2;
        answer += parityDigit * power;
        power *= 10;
        n/2;
    }
    cout << answer << endl;
}