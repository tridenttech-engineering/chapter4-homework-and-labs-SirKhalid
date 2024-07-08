// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <khalid sirelkhtim> on <7/7/24>

#include <iostream>
using namespace std;

int main() { 
  double small = 0.0;
  double medium = 0.0;
  double large = 0.0;
  double family = 0.0;
  
cout << "Small Pizzas Sold:" ;
  cin >> small;
cout << "Medium Pizzas Sold:" ;
  cin >> medium;
cout << "Large Pizzas Sold:" ;
  cin >> large;
cout << "Family Pizzas Sold:" ;
  cin >> family;

double total = small + medium + large + family;
  cout << endl << total;
double smallper = (small / total) * 100;
  cout << endl<< "Small Pizzas Sold:" << smallper<< "%"<< endl;
double mediumper = (medium / total) * 100;
  cout << "Medium Pizzas Sold:" << mediumper<< "%"<< endl;
double largeper = (large / total) * 100;
  cout << "Large Pizzas Sold:" << largeper<< "%"<< endl;
double famiyper = (family / total) * 100;
  cout << "Family Pizzas Sold:" << famiyper<< "%"<< endl;
return 0;
} // end of main function










