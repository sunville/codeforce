#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int length,width;
	cin>>length>>width;
	int parallel,vertical;
	if (length % 2 == 0)
	{
		parallel = (length/2) * width;
		vertical = 0;
	}
	else{
		parallel = (length/2) * width;
		vertical = width/2;
	}
	cout<<parallel + vertical<<endl;
	
	return 0;
}