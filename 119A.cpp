#include <iostream>

using namespace std;

int GCD(int a,int b){
	int gcd = b;
	int reminder = b;
	while(reminder > 0){
		if(a % gcd == 0)
			return gcd;
		else{
			reminder = a % gcd;
			a = gcd;
			b = reminder;
			gcd = reminder;
		}
	}
	return gcd;
}

int main(int argc, char const *argv[])
{
	int a,b,n;
	cin>>a>>b>>n;
	while( n > 0){
		n -= GCD(a,n);
		if( n == 0 ){
			cout<<0<<endl;
			break;
		}
		n -= GCD(b,n);
		if( n == 0 ){
			cout<<1<<endl;
			break;
		}
	}
	return 0;
}