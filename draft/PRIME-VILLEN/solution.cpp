#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
char s[505050];
int n,chk[10101],dp[505050],cnt[10101],c;
vector<int> v;
pair<int,int> p[505050];
void out(int a){
    if(!a) return;
    out(p[a].first);
    printf("%d ",p[a].second);
}

int main(){
    v.push_back(1);
    for(int i=2;i<=10000;i++){
        if(chk[i]) continue;
        v.push_back(i);
        cnt[i] = ++c;
        for(int j=i+i;j<=10000;j+=i) chk[j] = 1;
    }

    scanf("%s",s+1);
    n = strlen(s+1);
    for(int i=1;i<=n;i++){
        dp[i] = -1e9;
        for(int j=i;j>=max(1,i-3);j--){
            if(dp[j-1]+1 <= dp[i]) continue;
            int num = 0;
            for(int k=j;k<=i;k++) num = num * 10 + s[k] - '0';
            if(!chk[num]){
                dp[i] = dp[j-1]+1;
                p[i] = {j-1, cnt[num]};
            }
        }
    }
    printf("%d\n",dp[n]);
    out(n);
}
