#include <stdio>
#include <iostream>
using namespace std;
void inttoseize(int inputnumber, char* result)
{
	int i = 0;
	if(inputnumber<16){
		if(inputnumber<10){
			result[0] = inputnumber + '0';
		}
		if(inputnumber>10){
			result[0] = inputnumber + 'A';
		}
	}
	if(inputnumber>16)
	{
		inttoseize(inputnumber/16, result);
		i++;
		result[i] = 
	}



}
