#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int a,b,c;
	cin>>a>>b>>c;

	vector<int> expression;
	expression.push_back(a+b+c);
	expression.push_back(a+b*c);
	expression.push_back(a*b+c);
	expression.push_back(a*b*c);
	expression.push_back((a+b)*c);
	expression.push_back(a*(b+c));
	int maximum = expression.at(0);
	for (int i = 1; i < expression.size(); ++i)
	{
		if(expression.at(i) >= maximum)
			maximum = expression.at(i);
		else
			continue;
	}
	cout<<maximum<<endl;
	return 0;
}