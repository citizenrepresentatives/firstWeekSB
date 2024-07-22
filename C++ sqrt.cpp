#include <iostream> // Includes the iostream library, which provides input/output functionality.
#include <cmath> 
using namespace std; // Using the standard namespace, which provides access to standard C++ functions.

int main() { 
  string name; //Ask user for a name
  double a, b, c; 

cout << "What is your name?";
cin >> 
  
cout << "Please enter the coefficients of the quadratic equation (a, b, c): ";
cin >> a >> b >> c;

  //Calculate the discriminant
  double discriminant = b * b - 4 * a * c;

  // Calculate both roots
  double result1 = (-b + sqrt(discriminant)) / (2 * a);
  double result2 = (-b - sqrt(discriminant)) / (2 * a);
  
  //Output the roots
  cout << "Based off the variables A, B, and C entered by " << name << ", the roots of the quadratic equation are: " << result1 << " and " << result2 << endl
  cout << "The solutions are: " << result1 << " and " << result2 << endl;
  return 0;
}


