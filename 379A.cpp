#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int a,b;
	cin>>a>>b;
	int time = 0;
	int remainder = 0;
	while(a > 0){
		time += a;
		a += remainder;
		remainder = a%b;
		a /= b;
	}
	cout<<time<<endl;
	return 0;
}