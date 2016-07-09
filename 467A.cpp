#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int rooms;
	cin>>rooms;
	//vector<pair<int,int> > roomlist;
	int number = 0;
	for (int i = 0; i < rooms; ++i)
	{
		int p,q;
		cin>>p>>q;
		if (q - p >= 2)
		{
			number++;
		}
		//roomlist.push_back(make_pair(p,q))
	}
	cout<<number<<endl;
	return 0;
}