#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	int cases;
	cin>>cases;
	string word="";
	while(cases--){
		cin>>word;
		if (word.length() <=  10)
		{
			cout<<word<<endl;
		}
		else{
			int length = word.length();
			cout<<word[0]<<length - 2<<word[length-1]<<endl;
		}
	}
	return 0;
}