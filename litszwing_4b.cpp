// Lab 4b
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cmath> 
#include <string>
using namespace std;
int main()
{
string msg, word;

cout << "Enter a sentence: " << endl;
getline (cin,msg);

cout << "Enter a word " << endl;
cin >> word;

int n=0;
int s;
for (int i=0; i<msg.length(); i++)
{
if (isspace(msg[i]))

}


cout << "This word appears " << n <<  "times in the sentence. " << endl;

return 0;
}
