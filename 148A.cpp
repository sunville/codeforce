#include <iostream>

using namespace std;

bool unharmed(int a,int b, int c, int d,int i){
	if(i % a != 0
		&& i % b != 0
		&& i % c != 0
		&& i % d != 0)
		return true;
	else
		return false;
}

int main(int argc, char const *argv[])
{
	int a,b,c,d,n;
	cin>>a>>b>>c>>d>>n;
	int unharmedDragon = 0;
	for (int i = 1; i <= n; ++i)
	{
		if(unharmed(a,b,c,d,i)){
			unharmedDragon++;
		}
	}
	int harmedDragon = n - unharmedDragon;
	cout<<harmedDragon<<endl;
	return 0;
}