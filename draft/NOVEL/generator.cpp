#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]){
	registerGen(argc, argv, 1);

	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	int N = rnd.next(1, a);
	printf("%d\n",N);
	for(int i=1;i<=N;i++){
        printf("%d",rnd.next(1,N));
        if(i<N) printf(" ");
	}
	puts("");
	int M = rnd.next(1, b);
	printf("%d\n",M);
	for(int i=1;i<=M;i++){
        printf("%d",rnd.next(1,N));
        if(i<M) printf(" ");
	}
	puts("");
	printf("%d\n",rnd.next(1,N));
	return 0;
}
