#include <iostream>
#include <vector>
using namespace std;


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<int> sequence;
	for (int i = 0; i < n; ++i)
	{
		int money;
		cin>>money;
		sequence.push_back(money);
	}
	int maximum = 0;
	for (int i = 0; i < n;)
	{
		int j;
		int temp = 1;
		for(j = i ; j<n-1 ; j++){
			if(sequence.at(j+1) < sequence.at(j))
				break;
			else
				temp++;
		}
		if(temp > maximum)
			maximum = temp;
		i = j + 1;
	}
	cout<<maximum<<endl;
	return 0;
}