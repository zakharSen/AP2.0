#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double m; 
	double z1;
	double z2; 
	cout << "m = "; cin >> m;
	z1 = (sin(m) + sin(5 * m) - sin(3 * m)) / (cos(m) - cos(3 * m) + cos(5 * m));
	z2 = tan(3 * m);
	if (z2 <= z1) {
		z2 = z2 * 100;
	}
	else
	{
		z2 = z2 / 100;
	}

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}