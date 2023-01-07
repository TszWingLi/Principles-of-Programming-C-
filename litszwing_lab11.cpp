// lab11
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cctype>
#include <string>
#include <fstream>

using namespace std;
void print(int* list, int size)
{
for (int i=0; i<size; i++)
cout << *(list+i) << " ";
}
int main()
{
int list[6]
= {11, 12, 13, 14, 15, 16};
print(list, 6);
return 0;
}


	



