#include <iostream>

using namespace std;

int main() {
  string forecast;
  double percentage;

  cout << "Enter the weather forecast: (sunny, rainy, or windy): ";

  cin >> forecast;

  //First case if the forecast is rainy
  if (forecast == "rainy") {
    cout << "What is the chance of rain in percentage: ";
  cin >> percentage;
} else {
  percentage = 0; 
}

//If the forecast is sunny
if(forecast == "sunny"){
  cout << "Remember to bring your sunglasses!" << endl;
}

//If the forecast is windy
if (forecast == "windy")
{
  cout << "Remember to bring your jacket!" << endl;
}

//If the forecast is entered as rainy
if (forecast == "rainy")
{
  if (percentage > 50.0)
    cout << "Medium chance of rain. Take an umbrella." << endl;

    if (percentage <= 50){
    cout << "Low chance, just in case, take an umbrella because what was the point of this program...?" << endl;
    }
    
}

if (forecast != "sunny" && forecast != "windy" && forecast != "rainy")
  cout << "Invalid input. Please enter a valid forecast." << endl;
}
  