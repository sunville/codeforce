#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string c;
	cin>>c;
	for (int i = 0; i < c.length(); ++i)
	{
		if (c.at(i) < 'a')
		{
			c[i] += 'a' - 'A';
		}
		if (c.at(i) == 'a' || c.at(i) == 'e'||c.at(i) == 'i'||c.at(i) == 'o'||c.at(i) == 'u'||c.at(i) == 'y')
		{
			cout<<"";
		}
		else
		{
			cout<<"."<<c[i];
		}
	}
	return 0;
}