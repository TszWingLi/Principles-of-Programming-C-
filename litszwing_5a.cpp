//lab5a
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
double mean, sd;
double sum=0; 
double sum2=0;
for (int i=1; i<=50; i++)
{
ifstream file;
file.open("student_height.txt");
double height; 

for (i=1; i<=50; i++)
file >> height;
sum += height;
sum2 += (pow(height,2));

file.close();
}
mean = sum / 50;
sd = sqrt((1/49) * (sum2 - 50 * pow(sum,2)));
cout << "The sample mean is " << fixed << setprecision(3) << mean << endl;
cout << "The sample sd is " << fixed << setprecision(3) << sd << endl;
return 0;
}
