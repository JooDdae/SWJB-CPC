#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,a[10101],chk[10101],b[10101],m,k;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    scanf("%d",&m);
    for(int i=1;i<=m;i++) scanf("%d",&b[i]);
    scanf("%d",&k);
    for(int i=1;i<=m;i++){
        if(chk[a[b[i]]] && i - chk[a[b[i]]] <= k) return !printf("%d",i);
        chk[a[b[i]]] = i;
    }
    printf("FUN");
}