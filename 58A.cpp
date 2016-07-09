#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	const string HELLO = "hello";
	int iterator = 0;
	for (int i = 0; (i < s.length() ) && iterator < HELLO.length(); ++i)
	{
		if (s.at(i) == HELLO.at(iterator))
		{
			//cout<<iterator<<" "<<s.at(i)<<endl;
			iterator++;
		}
	}
	if (iterator == HELLO.length())
	{
		cout<<"YES"<<endl;
	}
	else
		cout<<"NO"<<endl;
	return 0;
}