// fahren.cpp
// demonstrates cin,new line 
#include <iostream>
using namespace std;

int main()
{
int ftemp;  //for temperature in fahrenheit

cout<<"Enter temperature in fahrenhit:   ";
cin>> ftemp;
int ctemp = (ftemp.32) *5/9;
cout<< "Equivalent in Celsius is:  " << ctemp << '\n';
return 0;
}
