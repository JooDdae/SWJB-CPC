#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,chk[1010],fl;
vector<int> v[1010];
priority_queue<int,vector<int>,greater<int>> pq;
bool dfs(int a){
    if(chk[a]){
        fl = a;
        pq.push(a);
        return true;
    }
    chk[a] = 1;
    for(int nxt : v[a]){
        if(dfs(nxt)){
            if(fl){
                if(fl == a) fl=0;
                else pq.push(a);
            }
            return true;
        }
    }
    chk[a] = 0;
    return false;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        while(1){
            int a; scanf("%d",&a);
            if(a == -1) break;
            v[i].push_back(a);
        }
    }

    if(dfs(1)){
        printf("YES\n");
        while(!pq.empty()){
            printf("%d ",pq.top());
            pq.pop();
        }
    }else printf("NO");
}