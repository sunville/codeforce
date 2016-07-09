#include <iostream>
#include <vector>
using namespace std;
/*
	1 2 3 4 5
1
2
3
4
5
*/
int main(int argc, char const *argv[])
{
	int row = 0;
	int column = 0;
	
	for (int i = 0; i < 5; ++i)
	{
		vector<int> readLine;
		for (int j = 0; j < 5; ++j)
		{
			int number;
			cin>>number;
			readLine.push_back(number);
		}
		for (int j = 0; j < 5; ++j)
		{
			if (readLine.at(j) == 1)
			{
				column = j;
				row = i;	
			}
		}
	}
	int manipulate = 0;
	int manipulateColumn,manipulateRow;
	manipulateColumn = column < 2? 2 - column : column - 2;
	manipulateRow = row < 2 ? 2 - row : row - 2;
	manipulate = manipulateRow + manipulateColumn;
	cout<<manipulate<<endl;
	return 0;
}