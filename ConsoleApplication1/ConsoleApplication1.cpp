#include <iostream>
using namespace std;
int main()
{
	float A;
	float B;
	float X;
	cout << "I am going to solve the equation for x: Ax + B = 0\n";
	cout << "Enter a value for A: \n";
	cin >> A;
	cout << "Enter a value for B: \n";
	cin >> B;
	cout << "Solving " << A << "x + " << B << " for x...\n";
	cout << "The answer is: \n";
	X = (B * -1) / A;
	cout << X;
}