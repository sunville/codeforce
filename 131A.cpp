#include <iostream>
#include <string>
using namespace std;

bool check(string& s){
	for (int i = 1; i < s.length(); ++i)
	{
		if (s.at(i) > 'Z' && s.at(i) <= 'z')//i.e. We , aNd, needn't change.
		{
			return false;
		}
	}
	return true;
}

void capsLock(string& s){
	if (s.at(0) >= 'a' && s.at(0) <= 'z')
	{
		s[0] -= 'a' - 'A';
	}
	else
	{
		s[0] += 'a' - 'A';
	}
	for (int i = 1; i < s.length(); ++i)
	{
		if(s.at(i) >='A' && s.at(i) <= 'Z')
			s[i] += 'a' - 'A';
	}
}

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	bool flag = check(s);
	if (flag)
	{
		capsLock(s);
	}
	cout<<s<<endl;
	return 0;
}