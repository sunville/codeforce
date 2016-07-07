#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;
	vector<int> v;
	int number;
	for (int i = 0; i < n; ++i)
	{
		cin>>number;
		v.push_back(number);
	}
	int pivot = v.at(k-1);
	int advance = k;
	if (pivot == 0)
	{
		advance--;
		for (int i = k-2; i >= 0; --i)
		{
			if (v.at(i) > 0){
				break;
			}
			else
				advance--;
		}
	}
	else{
		for (int i = k; i < n ; ++i)
		{
			if(v.at(i) < pivot){
				break;
			}
			else
				advance++;
		}
	}

	cout<<advance<<endl;

	return 0;
}