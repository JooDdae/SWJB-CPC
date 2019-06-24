#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]){
	registerGen(argc, argv, 1);

	int l = atoi(argv[1]);
	int r = atoi(argv[2]);

	int N = rnd.next(1, l);

	printf("%d\n", N);
	for(int i=1;i<=N;i++){
        int M = rnd.next(1, r);
        printf("%d",M);
        if(i<N) printf(" ");
	}
	puts("");
	return 0;
}
