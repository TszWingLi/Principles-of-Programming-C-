// lab6a
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cctype>
#include <string>
#include <fstream>

using namespace std;
void print_factor(int i1)
{
cout << "The factor of " << i1 << " are " ;
for (int i = 1; i <= i1; i++)
if (i1 % i == 0) 
{
cout << i << " ";
}
cout << endl;
}

void print_cf (int i1, int i2)
{
cout << "The common factors of " << i1 << " and " << i2 << " are ";
for (int i=1; i<i1; i++)
if (i1 % i == 0 && i2 % i == 0)
cout << i << " ";
cout << endl;
}
void coprime(int i1, int i2)

{
for (int i = 2; i<i2; i++)
{
  if (i1 % i == 0 && i2 % i == 0) {
  cout << i1 << " and " << i2 << " are not coprime";
break;
}
  else cout << i1 << " and " << i2 << " are coprime"; 
  break;
}
}

int main()
{

int i1, i2;
cout << "Enter two positive integers: ";
cin >> i1 >> i2 ;
print_factor(i1) ;
print_factor(i2) ;
print_cf(i1,i2);
coprime(i1,i2);
return 0;
}
