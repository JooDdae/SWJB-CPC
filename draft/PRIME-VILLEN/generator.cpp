#include "testlib.h"
#include <vector>
using namespace std;

int main(int argc, char* argv[]){
	registerGen(argc, argv, 1);
    v.push_back(1);
    for(int i=2;i<=10000;i++){
        if(chk[i]) continue;
        v.push_back(i);
        for(int j=i+i;j<=10000;j+=i) chk[j] = 1;
    }
	int a = atoi(argv[1]);

    for(int i=1;i<=a;i++) printf("%d",v[rnd.next(0,v.size()-1)]);
    puts("");
	return 0;
}
