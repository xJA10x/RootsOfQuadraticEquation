/***********************************

Program to find roots of
quadretic equation

***********************************/

#include <iostream>
#include <cmath>
using namespace std;

// Function Prototype.
// Takes four parameters.
// Variables a, b, c, and
// discriminant in the main function.
float findRoots(float a, float b, float c, float discriminant);


int main() {

  cout << endl;
  cout << "################################# Running Program #######################" << endl;
  cout << endl;

  // Declares variables.
  float a;
  float b;
  float c;
  float discriminant;
  int control;

  // Prompts user.
  cout << "Enter -1 to quit program or else press any key to run program: ";
  cin >> control;
  cout << endl;

  while(control != -1) {

    // Prompts user.
    cout << "Enter the integers a, b, and c ";
    cin >> a >> b >> c;
    cout << endl;

    // Perform calculation to find discriminant.
    discriminant = b * b - 4 * a * c;

    // Function call.
    cout << findRoots(a, b, c, discriminant);

    cout << "Enter -1 to quit program: ";
    cin >> control;
    cout << endl;

  }

  cout << endl;
  cout << "################################## Exiting Program ######################" << endl;
  cout << endl;

  return 0;

}

// Builds function.
// Takes four parameters,
// local variables in the main
// function a, b, c, and discriminant in the
// main function.
float findRoots(float a, float b, float c, float discriminant) {

  // Declares variables.
  float x1;
  float x2;
  float realPart;
  float imaginaryPart;

  // If discriminant > 0, the roots are real and different.
  // If discriminant == 0, the roots are real and equal.
  // If discriminant < 0, the roots are complex and different.
  if(discriminant > 0) {

    x1 = (-b + sqrt(discriminant)) / (2 * a);
    x2 = (-b - sqrt(discriminant)) / (2 * a);
    cout << "The roots are real and different." << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 " << x2 << endl;

  } else if(discriminant == 0) {

    cout << "The roots are real and same." << endl;
    x1 = (-b + sqrt(discriminant)) / (2 * a);
    cout << "x1 = x2 = " << x1 << endl;

  } else {

    realPart = -b/(2*a);
    imaginaryPart = sqrt(-discriminant)/(2*a);
    cout << "Roots are complex and different." << endl;
    cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
    cout << "x2 " << realPart << "-" << imaginaryPart << "i" << endl;

  }

  return discriminant;

}
