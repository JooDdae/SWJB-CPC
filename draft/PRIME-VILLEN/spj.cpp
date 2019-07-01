#include <bits/stdc++.h>
using namespace std;

void correct(){ exit(0); }
void wrong(){ exit(1); }
void my_assert(int k){ if (!k) wrong(); }
vector<int> v;
int chk[10101];
int main(int argc, char *args[])
{
        v.push_back(1);
        for(int i=2;i<=10000;i++){
            if(chk[i]) continue;
            v.push_back(i);
            for(int j=i+i;j<=10000;j+=i) chk[j] = 1;
        }

        FILE *f_in = fopen(args[1],"r");
        FILE *f_user = fopen(args[3],"r");

        string s,in;
        my_assert(1 == fscanf(f_in, "%s", s));

        int n = s.size(),m;
        int dp[n+1];
        dp[0] = 0;

        for(int i=1;i<=n;i++){
            dp[i] = -1e9;
            for(int j=i;j>=max(1,i-3);j--){
                if(dp[j-1]+1 <= dp[i]) continue;
                int num = 0;
                for(int k=j;k<=i;k++) num = num * 10 + s[k-1] - '0';
                if(!chk[num]) dp[i] = dp[j-1]+1;
            }
        }

        my_assert(1 == fscanf(f_user, "%d", &m));
        for(int i=1;i<=m;i++){
            int a; my_assert(1 == fscanf(f_user, "%d", &a));
            in += to_string(v[a]);
        }

        fclose(f_in);
        fclose(f_user);

        if(m != dp[n] || in != s) wrong();
        correct();
}
