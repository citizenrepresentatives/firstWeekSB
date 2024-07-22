#include <iostream> 
#include <cmath> 
using namespace std; 

int main(){

//Name - string
string name;
  
  cout << "Entrez votre nom, s'il vous plait:"; //Please enter your name
  cin >> name;

//Last name initial - char

char lastInitial;
cout << "Entrez votre initiale du nom de famille, s'il vous plait:"; //Please enter your last name initial
cin >> lastInitial;

//Age - int
int age;
cout << "Entrez votre âge, s'il vous plait:"; //Please enter your age
cin >> age;

//Salary / hourly pay - double
double salary;
cout << "Entrez votre salaire annuel, s'il vous plait:"; //Please enter your annual salary]
cin >> salary;  

//Display all info - cout
cout << "Name: " << name << lastInitial << endl;
cout << "Age: " << age << endl;
cout << "Annual Salary: $" << salary << endl;

return 0;

  
}