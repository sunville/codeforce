#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	int gameRound;
	int intersection = n*m;
	for(gameRound=1; intersection > 0 ;gameRound++){
		intersection = (n-gameRound) * (m-gameRound);
	}
	if(gameRound % 2 == 1)
		cout<<"Malvika"<<endl;
	else
		cout<<"Akshat"<<endl;
	return 0;
}