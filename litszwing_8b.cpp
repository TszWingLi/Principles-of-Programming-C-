// lab8b
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cctype>
#include <string>
#include <fstream>

using namespace std;

double integral(int n)
{

if (n == 0) return 1;
else return 2 * pow(log(2), n) - n * integral(n-1);
}

int main()
{
int n;
cout << "Enter a non-negative integer n: ";
cin >> n;
cout << "The value of I_n is: " << fixed << setprecision(3) << integral(n);
return 0;

}
