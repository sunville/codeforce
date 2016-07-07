#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int kilos;
	cin>>kilos;
	if (kilos == 2)
		cout<<"NO";
	else if(kilos%2 == 0)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}