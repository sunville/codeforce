#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int count_1 = 0;
	int count_0 = 0;

	for (int i = 0; i < s.length(); ++i)
	{
		if (s.at(i) == '1')
		{
			count_1++;
			count_0 = 0;
		}
		else
		{
			count_1 = 0;
			count_0++;
		}
		if(count_1 == 7 || count_0 == 7){
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}