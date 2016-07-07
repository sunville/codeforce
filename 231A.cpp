#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	int solutions = 0;

	while(n--){
		int count = 0;
		for (int i = 0; i < 3; ++i)
		{
			int flag;
			cin>>flag;
			if (flag > 0)
			{
				count++;
			}
			else
				continue;
		}
		if(count >= 2)
			solutions++;
	}
	cout<<solutions<<endl;
	return 0;
}