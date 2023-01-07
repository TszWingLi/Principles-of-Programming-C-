// 2.b lab
#include <iostream>
using namespace std;
int main()
{
float a , b , c ;

cout << "Please enter three lengths:  ";
cin >> a >> b >> c;


if ((a + b > c) && (b + c > a) && (c + a > b) )
   
   { if ( a == b && b == c) 
   cout << "They can form an equilateral triangle." << endl;
    	
		else if ( (a == b && a !=c) || (b == c && b !=a) || (a == c && a !=b) )
    cout << "They can form an isosceles triangle." << endl;
   
   
   else cout << "They can form a triangle." << endl;
}
else cout << "They cannot form a triangle." << endl; 

return 0;
}

