#include <iostream>
#include <map>
using namespace std;
/*
Don't make it complicated.
Make it simple and foolish.
Carefully find the simple mathematical relationship
*/
map<long long,long long> road ;

long long travel(long long u,long long v,int w){
	long long fee = 0;
	while(u != v){
		if(u > v){
			road[u] += w;
			fee += road[u];
			u /= 2;
		}
		if(v > u){
			road[v] += w;
			fee += road[v];
			v /= 2;
		}
	}
	return fee;
}

int main(int argc, char const *argv[])
{
	int q;
	cin>>q;
	while(q--){
		int flag;
		cin>>flag;
		if(flag == 1){
			int w;
			long long u,v;
			cin>>u>>v>>w;
			travel(u,v,w);
		}
		if(flag == 2){
			long long u,v;
			cin>>u>>v;
			long long fee = travel(u,v,0);
			cout<<fee<<endl;
		}
	}
	return 0;
}