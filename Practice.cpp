#include <iostream>
using namespace std;
  class student{
    private:
    string name;
    int reg;
    string deg;
    
   public:
    void studentData(){
    cout << "Enter Name";
    cin >> name;
    
    cout << "Enter Your Registration Number";
    cin >> reg;
    
    cout << "Enter Your Degree";
    cin >> deg;
  }
  void studentDataDisplay(){
    cout << "Your Name is: " << name;
    cout << "Your Registration Number is: " << reg;
    cout << "Your Degree is: " << deg;
  		}
	};
int main(){
  student std1, std2, std3;
  for (int i=0; i<4; i++)

  std1.studentDataDisplay();
  std2.studentDataDisplay();
  std3.studentDataDisplay();
}