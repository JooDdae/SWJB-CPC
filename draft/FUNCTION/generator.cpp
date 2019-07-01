#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]){
	registerGen(argc, argv, 1);

	int a = atoi(argv[1]);

	int N = rnd.next(2, a);
	int in[N+1];
	for(int i=1;i<=N;i++) in[i] = i;
	printf("%d\n",N);
	for(int i=1;i<=N;i++){
        shuffle(in+1,in+1+N);
        int cnt = rnd.next(0, N-1);
        for(int j=1;j<=cnt;j++){
            if(in[j] == 1){
                cnt++;
                continue;
            }
            printf("%d ",in[j]);
        }
        printf("-1\n");
	}
	return 0;
}
