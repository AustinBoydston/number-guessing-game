#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;


int randNum = 0;
int holdThis = 11;
bool correct = false;
bool valid = true;


int main()
{
system("cls");
cout << flush;

for(int i = 0; i < 50; i++)
{
cout << endl;
}
randNum = rand() % 10 - 1;
randNum = rand() % 10 - 1;

while(!correct || !valid)
{


cout << "please guess a number between 1 and 10:" << endl;

    cin >> holdThis;

if(cin.fail())
{
cin.clear();
cin.ignore();
valid = false;
cout << "Please enter an integer" << endl;
}
else
{
    
        valid = true;
    
}


if(holdThis == randNum)
{
    correct = true;

}

}
//cout << holdThis << endl;
 return holdThis;
}