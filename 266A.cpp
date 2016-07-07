#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	int stones;
	cin>>stones;//NUMBER OF STONES
	string s;
	cin>>s;//RGBRRRGB
	int takeAway = 0;
	for (int i = 0; i < stones - 1 ; ++i)
	{
		if (s.at(i+1) == s.at(i))
		{
			takeAway++;
		}
	}
	cout<<takeAway<<endl;
	return 0;
}