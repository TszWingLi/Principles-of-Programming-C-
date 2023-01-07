// lab8a
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cctype>
#include <string>
#include <fstream>

using namespace std;

void simplify(double &n1, double &n2)
{
int x, y, temp;
x = n1;
y = n2;
if(x<y)
temp = x;
x = y;
y = temp;
while (y>0)
{
x = x % y;
temp = x;
x = y;
y = temp;
}
n1 = n1/x;
n2 = n2/x;
cout << "After simplification, we have: " << n1 << " " << n2 ; 
}

int main()
{
double n1, n2;
cout << "Enter the numerator and denominator: " ; 
cin >> n1 >> n2;
simplify(n1, n2); 

return 0;
}




