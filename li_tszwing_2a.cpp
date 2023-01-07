// 2a Lab 
#include <iostream>
using namespace std;
int main()
{
double salary, xx;
cout << "Please enter your monthly salary ($): ";
cin >> salary;

if (salary < 7100)
cout << "You are not required to contribute. ";


else if (7100 <= salary && salary <= 30000)
{xx = salary * 0.05;
cout << "You need to contribute $ " << xx << endl;}
   else cout << "You have reached the maximum contribution of $1500.";
return 0;

	
}
