#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	for (int i = 0; i < s.length(); ++i)
	{
		if (s.at(i) == 'H' || s.at(i) == 'Q' || s.at(i) == '9')
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}