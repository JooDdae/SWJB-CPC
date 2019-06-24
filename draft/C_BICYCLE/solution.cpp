#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,a[400],m,cy;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<=n;i++){
        int b; scanf("%d",&b);
        if(a[1] == b) cy = i - 1;
    }
    scanf("%d",&m);
    if(cy) cy = cy*m%n;
    for(int i=1;i<=n;i++) printf("%d ",a[(i-cy+n-1)%n+1]);
}