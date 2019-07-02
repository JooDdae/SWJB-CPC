#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]){
	registerGen(argc, argv, 1);

	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int c = atoi(argv[3]);

	int N = rnd.next(2, a);
	printf("%d\n",N);
	for(int i=1;i<=N;i++) printf("%d %d\n",rnd.next(-b,b),rnd.next(-c,c));
	return 0;
}
