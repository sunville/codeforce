#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;//pickup lines
	long long int l;//maximum length 
	vector<int> happinesLevel;
	for(int i=0;i<n;i++){
		int level;
		cin>>level;
		happinesLevel.push_back(level);
	}
	vector<string> pickupLines;
	for(int i=0;i<n;i++){
		string line;
		cin>>line;
		pickupLines.push_back(line);
	} 
	
	return 0;
}