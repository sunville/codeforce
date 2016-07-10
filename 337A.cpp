#include <iostream>
#include <vector>
using namespace std;


void swap(int i,int j, vector<int>& a){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void quicksort(vector<int>& arr, int left, int right){
    int min = (left+right)/2;
    //cout<<"QS:"<<left<<","<<right<<"\n";

    int i = left;
    int j = right;
    int pivot = arr[min];

    while(left<j || i<right)
    {
        while(arr[i]<pivot)
        i++;
        while(arr[j]>pivot)
        j--;

        if(i<=j){
            swap(i,j,arr);
            i++;
            j--;
        }
        else{
            if(left<j)
                quicksort(arr, left, j);
            if(i<right)
                quicksort(arr,i,right);
            return;
        }
    }
}

void initialPuzzles(vector<int>& puzzles,int m){
	for (int i = 0; i < m; ++i)
	{
		int quantity;
		cin>>quantity;
		puzzles.push_back(quantity);
	}
}

void getLeastDifference(vector<int>& puzzles,int n,int m){
	int difference = puzzles[m-1] - puzzles[0];
	for (int i = 0; i < m-n+1; ++i)
	{
		int temp = puzzles[i+n-1] - puzzles[i];
		if(temp < difference)
			difference = temp;
		else
			continue;
	}
	cout<<difference<<endl;
}

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	vector<int> puzzles;
	initialPuzzles(puzzles,m);
	quicksort(puzzles,0,m-1);
	getLeastDifference(puzzles,n,m);
	return 0;
}