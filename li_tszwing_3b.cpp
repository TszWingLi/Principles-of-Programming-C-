// lab 3b
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip> 
using namespace std;
int main()
{
int n ;
double c;
cout << "Enter an integer n: " ;
cin >> n;
c = (sqrt(2 * n * M_PI) ) * pow((n / M_E) , n );
cout << n << "! ~ " << c << endl;
return 0;
} 

