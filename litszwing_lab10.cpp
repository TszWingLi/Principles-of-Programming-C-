// lab10
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cctype>
#include <string>
#include <fstream>

using namespace std;
int main()

{
int rowsize, colsize; 

cout << "Enter the row number: ";
cin >> rowsize;
cout << "Enter the column number: ";
cin >> colsize;
double a[rowsize][colsize];

cout << "Enter a " << rowsize << " x " << colsize << " matrix A: ";
for (int i = 0; i < rowsize; i++)
	for (int j = 0; j < colsize; j++)
		{
		cin >> a[i][j];
	    }
		
double v[colsize][1];
cout << "Enter a " << colsize << "x1 vector v: ";
for (int i = 0; i < colsize;i++)
	for (int j = 0; j < 1; j++)
		cin >> v[i][j];


double transpose[colsize][rowsize];
for (int i = 0; i < rowsize; i++)
     {
	   for (int j = 0; j < colsize; j++) 
		{
			transpose[j][i] = a[i][j];
		}
	}
cout << "The transpose of A is " << endl;
for (int i = 0; i < colsize; i++)	
{
	for (int j = 0; j < rowsize; j++)
		{
		cout << transpose[i][j] << " ";
		}
		cout << endl;
}
cout << "The result of Av is" << endl;
int sum = 0;
{
	for(int i=0; i<rowsize; i++)
		for( int j=0; j<colsize; j++)
			{
				sum+= a[i][j] * v [0][j]; 
			}
	cout << sum << endl;
	sum = 0;
}
return 0;
}
