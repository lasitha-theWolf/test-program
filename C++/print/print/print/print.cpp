#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float de, n1, n2;
	cout << "Input number 1 :" << endl;
	cin >> n1;
	cout << "Input number 2:" << endl;
	cin >> n2;
	de = n1 / n2;
	cout << "de :"<< setw(12) <<setprecision(3) <<de << endl;

	return 0;
}