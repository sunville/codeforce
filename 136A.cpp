#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<int> give;
	give.push_back(0);
	vector<int> receive;
	receive.push_back(0);
	for (int i = 0; i < n; ++i)
	{
		int index;
		cin>>index;
		give.push_back(index);
		receive.push_back(0);
	}
	for (int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= n; j++){
			if(give[j] == i)
				receive[i] = j;
		}
	}
	for (int i = 1; i <= n; ++i)
	{
		cout<<receive[i]<<" ";
	}
	return 0;
}