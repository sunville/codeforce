#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string names[5];
	names[0] = "Sheldon";
	names[1] = "Leonard";
	names[2] = "Penny";
	names[3] = "Rajesh";
	names[4] = "Howard";

	int n;
	cin>>n;
	int power;
	int lowerBound;
	int upperBound;
	for(power = 1; ;power++){
		lowerBound = (pow(2,power - 1) - 1)* 5;
		upperBound = (pow(2,power) - 1) * 5;
		if(n > lowerBound && n <= upperBound)
			break;
		else
			continue;
	}
	int temp = n - lowerBound;
	int i;
	for(i=0;temp > 0;){
		int start = pow(2,power-1);
		for(int j=0; j<start ;j++){
			temp--;
			if(temp == 0){
				cout<<names[i]<<endl;
				return 0;
			}
			else
				continue;
		}
		i++;
		if(i == 5)
			i = 0;
		else
			continue;
	}
	cout<<names[i]<<endl;
	return 0;
}