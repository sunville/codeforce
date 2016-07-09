#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int k,n,w;
	cin>>k>>n>>w;
	int sum;
	sum = ((1+w) * w) / 2 * k;
	int borrow = sum - n;
	if(borrow > 0)
		cout<<borrow<<endl;
	else
		cout<<0<<endl;
	return 0;
}