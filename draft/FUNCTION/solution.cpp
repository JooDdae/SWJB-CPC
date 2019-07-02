#include <bits/stdc++.h>
using namespace std;
int n,chk[1010],visited[1010],fl;
vector<int> v[1010];
priority_queue<int,vector<int>,greater<int>> pq;
bool f(int cur){
	if(visited[cur]) return false;
	if(chk[cur]){
		fl = cur;
		return true;
	}
	chk[cur] = 1;
	for(int nxt : v[cur]){
		if(f(nxt)){
			if(fl){
				pq.push(cur);
				if(cur == fl) fl = 0;
			}
			return true;
		}
	}
	chk[cur] = 0;
	visited[cur] = 1;
	return false;
}
int main() {
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		while(1){
			int a; scanf("%d",&a);
			if(a == -1) break;
			v[i].push_back(a);
		}
	}

	if(f(1)){
		printf("YES\n");
		while(!pq.empty()){
			printf("%d ",pq.top());
			pq.pop();
		}
	}else printf("NO");
}
