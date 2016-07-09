#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	string copy = s;
	int indistinct = 0;
	for (int i = 0; i < copy.length() - 1; ++i)
	{
		for (int j = i + 1; j < copy.length(); ++j)
		{
			if(copy[j] == copy[i] && copy[j] >= 'a' && copy[j] <= 'z'){
				copy[j] = ' ';
				indistinct++;
			}			
		}
	}
	if ((s.length() - indistinct) % 2 == 0)
	{
		cout<<"CHAT WITH HER!"<<endl;
	}
	else
		cout<<"IGNORE HIM!"<<endl;
	return 0;
}