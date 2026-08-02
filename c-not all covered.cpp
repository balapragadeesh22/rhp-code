#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int solve(){
	int n,m;
	cin>>n>>m;
	vector<int>psum(n+2,0);
	while(m--){
		int from,to;
		cin>>from>>to;
		psum[from]++;
		psum[to+1]--;
		
	}
	
	int mini=20000000;
	for(int w=1;w<=n;++w){
		psum[w]+=psum[w-1];
		mini=std::min(mini,psum[w]);
	}
	cout<<mini;
	return 0;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int tc=1;
	while(tc--){
		solve();
	}
	return 0;
}
