#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<vector<int> > forces;
	forces.resize(n);
	for (int i = 0; i < n; ++i)
	{
		for(int j = 0 ; j<3 ; j++){
			int component;
			cin>>component;
			forces[i].push_back(component);
		}
	}
	int sum = 0;
	for (int i = 0; i < 3; ++i)
	{
		for	(int j = 0; j<n ; j++){
			sum += forces[j][i];
		}
		if(sum != 0){
			cout<<"NO"<<endl;
			break;
		}
	}
	if(sum == 0)
		cout<<"YES"<<endl;
	return 0;
}