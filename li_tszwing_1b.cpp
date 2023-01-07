// Section 1.2 Variables, Arithmetics, and Input Operator
#include <iostream>
using namespace std;
int main()

{
int amount, xx, yy, zz;


cout << "Enter the withdrawal amount($) ";
cin >> amount;

xx = amount / 1000; 
yy= (amount -  1000 * xx ) / 500;
zz= ((amount - ( 1000 * xx ) ) - 500* yy) / 100;

cout << "Here is your money:" ;

cout << "$1000 x " << xx << endl;

cout << "$500 x " << yy << endl;

cout << "$1100 x " << zz << endl;

return 0;
}
