#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]){
	registerGen(argc, argv, 1);

	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int c = atoi(argv[3]);
    vector<int> v;
    for(int i=1;i<=360;i++) if(360%i == 0) v.push_back(i);
	int N = rnd.next(0, a-1);
	printf("%d\n", v[N]);
	for(int i=1;i<=v[N];i++){
        printf("%d",i);
        if(i < v[N]) printf(" ");
	}
	printf("\n");
	int K = rnd.next(0, b);
	for(int i=1;i<=v[N];i++){
        printf("%d",(i-1+K)%v[N]+1);
        if(i < v[N]) printf(" ");
	}
    printf("\n");
    int M = rnd.next(1, c);
    printf("%d\n",M);
	return 0;
}