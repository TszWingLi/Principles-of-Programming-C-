// Lab 4a
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cmath> 
using namespace std;
int main()
{
double n, s;
double ratio;
cout << "Enter the initial term: " ;
cin >> n;

cout << "Enter the common ratio: " ;
cin >> ratio;

cout << "Enter the number of terms: " ;
cin >> s;

double sum = 0;
for (int i = 0; i < s; i++)
{ 
sum = sum + n * pow(ratio,i);
}
cout <<" The geometric series is " << sum << endl;
return 0;
}









