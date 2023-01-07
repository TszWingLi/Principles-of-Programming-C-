// lab5b
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

int num;
char ch;
cout << "Enter a number: ";
cin >> num;
cout << "Enter a character: ";
cin >> ch;

for (int i = 1; i <= num; i++)
{
for (int j = num; j >= i; j--)
{
cout << ch;
}
cout << endl;
cout << setw(i+1) << endl;
}

return 0;
}
