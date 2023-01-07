// lab9
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
int size;
int temp;
int count = 0;
cout << "Enter the number of students: ";
cin >> size;
double numbers[size];
double sum = 0;

cout << "Enter the marks: ";
for	(int i = 0; i<size; i++)
{
	cin >> numbers[i];
	sum += numbers[i];
}

for(int i=0;i<size;i++)
{	for(int j=i+1;j<size;j++)
		{ if(numbers[i]<numbers[j])
			{
			temp = numbers[i];
			numbers[i]=numbers[j];
			numbers[j]=temp;
			}
			
		}
}

cout << "Arranged marks: ";
for(int i=0;i<size;i++)
	{
	cout<<numbers[i]<<" ";
	}
cout << endl;
double mean = sum/size;
cout << "Mean: " << mean << endl;
double median;
median = (numbers[size / 2] + numbers[size / 2 - 1] ) / 2;
cout << "Median: " << median << endl;

for (int i = 0; i<size; i++)
{	
	if (numbers[i] != numbers[i+1])
	{cout << numbers[i] << " marks ";
	
	for (int j = 0; j<size; j++)
		{
		if (numbers[i] == numbers [j])
			{
			count++;
		  	}
		}
		cout << count << " students(s) " << endl;
		count = 0;
	}
}

return 0;
}















