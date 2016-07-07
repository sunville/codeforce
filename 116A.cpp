#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<int> up;
	vector<int> down;
	//record data
	for (int i = 0; i < n; ++i)
	{
		int a,b;
		cin>>a>>b;
		down.push_back(a);
		up.push_back(b);
	}
	int minimax = 0;
	int record = 0;
	for (int i = 0; i < n; ++i)
	{
		record -= down.at(i);
		record += up.at(i);
		if (record >minimax)
		{
			minimax = record;
		}
	}
	cout<<minimax<<endl;
	return 0;
}