#include <iostream>
#include <string>
using namespace std;
/*
Berland -> Birland
code    -> edoc
*/
int main(int argc, char const *argv[])
{
	string s,t;
	cin>>s>>t;
	for (int i = 0; i < s.length(); ++i)
	{
		if(s.length() != t.length()){
			cout<<"NO"<<endl;
			return 0;
		}
		if(s.at(i) != t.at(t.length() - i - 1)){
			cout<<"NO"<<endl;
			return 0;
		}	
	}
	cout<<"YES"<<endl;
	return 0;
}