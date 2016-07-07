#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	int groupOfOne = 0;
	int groupOfTwo = 0;
	int groupOfThree = 0;
	int groupOfFour = 0;
	for (int i = 0; i < n; ++i)
	{
		int people;
		cin>>people;
		if (people == 1)
			groupOfOne++;
		else if (people == 2)
			groupOfTwo++;
		else if (people == 3)
			groupOfThree++;
		else
			groupOfFour++;
	}

	int cars = 0;

	cars += groupOfFour;
	cars += groupOfThree;
	groupOfOne -= groupOfThree;
	cars += groupOfTwo / 2;
	
	if(groupOfOne <= 0){
		cars += groupOfTwo % 2;
	}
	else{
		cars += groupOfOne / 4;
		int remain = groupOfOne % 4;
		if (groupOfTwo % 2 == 0)
		{
			if(remain != 0)
				cars++;
			else
				{}
		}
		else{
			if(remain == 3)
				cars += 2;
			else
				cars++;
		}
	}

	cout<<cars<<endl;

	return 0;
}