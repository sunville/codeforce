#include <iostream>

using namespace std;

bool luckyDigits(long long int n){
	int number = 0;
	while(n>0){
		if (n%10 != 7 && n%10 != 4)
		{
			n /= 10;
			continue;
		}
		else{
			number++;
			n /= 10;
		}
	}
	if(number == 4 || number == 7)
		return true;
	else
		return false;
}


int main(int argc, char const *argv[])
{
	long long int n;
	cin>>n;
	if(luckyDigits(n))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}