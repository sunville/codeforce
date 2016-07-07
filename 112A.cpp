#include <iostream>
#include <string>
using namespace std;

void lowercase(string& s){
	for (int i = 0; i < s.length(); ++i)
	{
		if (s.at(i)<'a')
			s[i] += 'a'-'A';
	}
}

int main(int argc, char const *argv[])
{
	string s1,s2;
	cin>>s1>>s2;
	lowercase(s1);
	lowercase(s2);
	if(s1 < s2)
		cout<<-1<<endl;
	else if(s1 == s2)
		cout<<0<<endl;
	else
		cout<<1<<endl;
	return 0;
}