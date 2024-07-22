#include <iostream>
#include <string> // Library for strings

using namespace std;

int main(){
  int grade;  
  cout << "Enter your test grade: ";
  cin >> grade;

  if (grade > 90) {    
    cout << "You got an A!" << endl;
  
  } else if (grade > 80) {
    cout << "You got a B! Keep it up for a better grade!" << endl;
  
  } else if (grade > 70) {
    cout << "You got a C! You can do better!" << endl;
  
  } else if (grade > 60) {
    cout << "You got a D! You need to study more!" << endl;
 
  } else if (grade > 50) {
    cout << "You got an F! See me at office hours!" << endl;
  }

  return 0;
}