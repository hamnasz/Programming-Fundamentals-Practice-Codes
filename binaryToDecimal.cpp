#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;

    int answer = 0;
    int power = 1;

    while (n > 0){
        int lastdigit = n % 10;
        answer += lastdigit + power;
        power *= 2;
        n/=10;
    }
    
    cout << answer << endl;

    return 0;
}