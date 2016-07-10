#include <iostream>
#include <string>
using namespace std;

void compositeDivide(int n){
	int x,y;
	if( n % 2 == 0){
		x = 4;
		y = n-x;
	}
	else{
		x = 9;
		y = n - x;
	}
	cout<<x<<" "<<y<<endl;;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	compositeDivide(n);
	return 0;
}