// lab7
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cctype>
#include <string>
#include <fstream>

using namespace std;

int factorial(int n)
{
int x = 1;
for (int i=0; i<n; i++)

x = x * (n - i);
return x;
}
int permute(int n, int k)
{
int P = 0;
int a, b;
a = factorial(n);
b = factorial(n-k);
P = a/b;
return P;

}

int main()
{
for (int n=1; n<=10; n++)
{
for (int k=1; k<=n; k++)
{
cout << permute(n, k ) << " ";
}
cout << endl;
}

return 0;
}
