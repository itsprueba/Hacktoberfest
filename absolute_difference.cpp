#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int code(int n,int k){
	return abs(n-k);
}

int main(){
	int t;
	cin>>t;
	vector<int> n(t),k(t);
	for(int i=0;i<t;i++){
		cin>>n[i]>>k[i];
		cout<<code(n[i],k[i]);
	}
	return 0;
}
