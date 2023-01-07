// 1.1 The Output Operator
#include <iostream>
using namespace std;
int main()
{
double principal,  rate, time, interest, amount;

cout << "Enter the principal ($): ";
cin >> principal;

cout << "Enter the interest rate (%) :  ";
cin >> rate;

cout << "Enter the time of deposit (months): ";
cin >> time;

interest = (principal) * (rate / 100) * (time / 12 );
amount = principal + interest;

cout << "The interest is $ " << interest << endl;
cout << "The total amount is $ " << amount << endl;

return 0;
}
 
