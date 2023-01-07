// lab 3a
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
int die1 = rand() % 6 + 1;
int die2 = rand() % 6 + 1;
int die3 = rand() % 6 + 1;
cout << "The three dice show: " << die1 << " " << die2 << " " << die3 << endl;

if (die1 == die2 && die2 == die3)
cout << " The result is triple " << endl;

else if ( die1 + die2 + die3 >= 11)
cout << "The result is big " << endl;

else cout << "The result is small " << endl;

return 0;
}
