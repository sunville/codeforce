
#include <iostream>
#include <vector>
using namespace std;

bool luckyNumber(int n){
	while(n>0){
		if (n%10 != 7 && n%10 != 4)
		{
			return false;
		}
		else
			n /= 10;
	}
	return true;
}

void luckyNumberTable(vector<int>& v){
	for (int i = 1; i <= 1000; ++i)
	{
		if(luckyNumber(i))
			v.push_back(i);
		else
			continue;
	}
}

int main(int argc, char const *argv[])
{		
	int n;
	cin>>n;
	vector<int> number;
	luckyNumberTable(number);
	if(luckyNumber(n)){
		cout<<"YES"<<endl;
		return 0;
	}
	else{
		for (int i = 0; i < number.size(); ++i)
		{
			if (n % number.at(i) == 0)
			{
				cout<<"YES"<<endl;
				return 0;
			}
		}
	}
	cout<<"NO"<<endl;

	return 0;
}