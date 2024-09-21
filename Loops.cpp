#include <iostream>
using namespace std;
int main (){
    int rows, columns;
    char symbol;
    cout <<"How Many Rows You Want?" << endl << "Rows: ";
    cin >> rows;
    
    cout <<"How Many Columns You Want?" << endl << "Columns: ";
    cin >> columns;

    cout <<"Which Symbol You Want?" << endl << "Symbol: ";
    cin >> symbol;

    for (int i=1; i<=rows; i++)
    {
        for (int j=1; j<=columns; j++)
        {
            cout << symbol;
        }
        cout << endl;
    }
}