#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int>& coins){
  for(int i=0;i<coins.size() - 1;i++){
  for(int j=i;j<coins.size();j++){
  if(coins[i] < coins[j]){
  int temp = coins[j];
  coins[j] = coins[i];
  coins[i] = temp;
  }
  }
  }
}

int main(){
  int n;
  int sum = 0;
  cin>>n;
  vector<int> coins;
  for(int i=0;i<n;i++){
  int value;
  cin>>value;
  sum += value;
  coins.push_back(value);
  }
  sort(coins);
  int take = 0;
  int number = 0;
  sum /= 2;
  for(int i = n-1 ; i>=0 ; i--){
  take += coins[i];
  number++;
  if(take > sum){
  cout<<number<<endl;
  return 0;
  	}
  }
}