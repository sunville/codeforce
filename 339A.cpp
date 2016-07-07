#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	for (int i = 0; i < s.length(); i=i+2)
	{
		for (int j = i; j < s.length(); j=j+2)
		{
			char temp = s.at(i);
			if(s.at(j) < temp){
				s[i] = s[j];
				s[j] = temp;
			}		
		}
	}
	cout<<s<<endl;
	return 0;
}