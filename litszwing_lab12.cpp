// lab12
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cctype>
#include <string>
#include <fstream>

using namespace std;
class vector{
private:
	double x1, y1, z1;
	double x2, y2, z2;
	double a, b, c;
	double q, w, r;
public:
	void magnitude()
	{
		cout << "Enter the coordinates of vector v1: ";
		cin >> x1 >> y1 >> z1;
		cout << "Enter the coordinates of vector v2: ";
		cin >> x2 >> y2 >> z2;
		double V1 = sqrt(pow(x1,2) + pow(y1,2) + pow(z1,2));
		double V2 = sqrt(pow(x2,2) + pow(y2,2) + pow(z2,2));
		cout << "The magnitude of v1 is ";
		cout << showpoint << fixed << setprecision(2)<< V1;
		cout << endl; 
		cout << "The magnitude of v2 is ";
		cout << showpoint << fixed << setprecision(2)<< V2;	
		cout << endl; 
		double a, b, c;
		a = x1 + x2;
		b = y1 + y2;
		c = z1 + z2;
		double q, w, r;
		q = x1 - x2;
		w = y1 - y2;
		r = z1 - z2;
		cout << "v1 + v2 =" << "(" << a << "," << b << "," << c << ")";
		cout << endl;
		cout << "v1 - v2 =" << "(" << q << "," << w << "," << r << ")";
	}
	double dot(vector)
	{
	return x1 * x2 + y1 * y2 + z1 * z2;
	}

	void printv(double a, double b, double c)
	{
	cout << "v1 + v2 = ";
	cout << " ( " << a << " , " << b << " , " << c << " ) ";
	}
};		

int main()
{
double x1, y1, z1;
double x2, y2, z2;
double V1, V2;
double a, b, c;
double q, w, r;
vector v;
v.magnitude();


return 0;
}
