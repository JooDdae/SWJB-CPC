#include <bits/stdc++.h>
using namespace std;
int n,x[1010],y[1010],ans;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d %d",&x[i],&y[i]);
    for(int i=1;i<=n;i++) for(int j=i+1;j<=n;j++) ans = max(ans, (x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]));
    printf("%d",ans);
}
