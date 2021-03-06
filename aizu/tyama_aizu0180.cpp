//kruskal tree
#include <iostream>
#include <algorithm>
using namespace std;
#define M 999
int parent[M],a[M],b[M];
pair<int,int>node[M];
int root(int a){return parent[a]==a?a:parent[a]=root(parent[a]);}
int unite(int a,int b){
	int x=root(a),y=root(b);
	if(x==y)return 0;
	parent[x]=y;
	return 1;
}
int main(){
	int i,s,n,m;
	for(;cin>>n>>m,n;cout<<s<<endl){
		for(i=0;i<m;i++)cin>>a[i]>>b[i]>>node[i].first,node[i].second=i;
		sort(node,node+m);
		for(i=0;i<n;i++)parent[i]=i;
		for(s=i=0;i<m;i++)if(unite(a[node[i].second],b[node[i].second]))s+=node[i].first;
	}
}