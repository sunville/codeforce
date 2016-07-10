#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	int days = n;
	for(int k = n;;k++){
		if( k/m + n == k){
			cout<<k<<endl;
			break;
		}
		else
			continue;
	}
	return 0;
}