//Lab4-4.cpp - displays the volume of a cylinder
//Created/revised by <Khalid Sirelkhtim> on <7/7/24>
#include <iostream>
using namespace std;
int main()
{
double height   = 0.0;
double radius   = 0.0;
double volume   = 0.0;
const double PI       = 3.14;

cout << "Height: ";
cin >> height;
cout << "Radius: ";
cin >> radius;
volume = PI * radius * radius * height;
  cout << "Volume: " << volume << endl;
return 0;
} //end of main function