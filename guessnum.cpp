#include <iostream>
using namespace std;
int main ()
{
    int num, guess, tries = 0;

    num = (rand () % 100) +1;

    cout << "******** NUMBER GUESSING GAME **********" << endl;
    do {
        cout << "< Enter a Guess Between 1 ~ 100 >" << endl;
        cin >> guess;
        tries ++;
        if (guess > num){
            cout << "Too High Bruh!" << endl;
        }
        else if (guess < num){
            cout << "Too Low Bruh!" << endl;
        } else {
            cout << "Kamal Kerdia Bruh Lekin Tries itni hain --->" << tries << endl;
        } 
    } 
    while (guess != num);
}