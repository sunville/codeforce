#include <iostream>
//#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	long long int n;
	cin>>n;
	if(n % 2 == 0){
		cout<<n / 2 <<endl;
	}
	else{
		cout<< (n - 1) / 2 - n<<endl;
	}	
	return 0;
}