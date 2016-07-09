#include <iostream>

using namespace std;

bool determine(int i){
	string s;
	while(i > 0){
		char digit = (i % 10) + '0';
		s.push_back(digit);
		i /= 10;
	}
	for(int i=0; i<s.length() - 1; i++){
		for(int j = i+1; j<s.length(); j++){
			if(s.at(i) == s.at(j))
				return false;
		}
	}
	return true;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	for (int i = n+1; ; ++i)
	{
		if(determine(i)){
			cout<<i<<endl;
			return 0;
		}
	}
	return 0;
}