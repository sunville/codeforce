#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	int statements;
	cin>>statements;
	string command="";

	int x=0;
	while(statements--){
		cin>>command;
		if (command.at(1) == '+')
		{
			x++;
		}
		else
			x--;
	}
	cout<<x<<endl;
	return 0;
}