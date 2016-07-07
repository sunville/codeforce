#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	long long int n,m,a;
	cin>>n>>m>>a;
	long long int column = n/a;
	long long int row = m/a;
	if(n%a != 0)
		column++;
	if(m%a != 0)
		row++;
	long long int number = column*row;
	cout<<number<<endl;
	return 0;
}