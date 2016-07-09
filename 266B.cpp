#include <iostream>
#include <string>
using namespace std;

void arrange(string &queue,int t,int n){
	for (int i = 0; i < t; ++i)
	{
		for (int j = 0; j < n - 1; ++j)
		{
			if(queue[j+1] == 'G' && queue[j] == 'B'){
				queue[j] = 'G';
				queue[j+1] = 'B';
				j++;
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	int n,t;
	cin>>n>>t;
	string queue;
	cin>>queue;
	arrange(queue,t,n);
	cout<<queue<<endl;
	return 0;
}