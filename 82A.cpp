#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//好蠢的做法。。上网找了个改进版
/*
int n;
    cin >> n;

    int r = 1;
    while (r * 5 < n)
    {
        n -= r * 5;
        r *= 2;
    }

    string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    cout << names[(n - 1) / r] << endl;

*/
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