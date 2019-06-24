#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
ll a=1;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        ll b; scanf("%lld",&b);
        a*=b;
        if(a >= 100000000) return !printf("TLE");
    }
    printf("%lld",a);
    return 0;
}
