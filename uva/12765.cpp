#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	int N, M;
	while (scanf("%d %d", &N, &M) == 2 && (N != 0 || M != 0)){
		int A[10] = {0};
		int B[10] = {0};
		int i, j, a;
		for (i = 0; i < N; i++){
			scanf("%d", &a);
			for (j = 2; j <= a; j++){
				A[j]++;
				//cout<<A[j]<<" ";
			}
		}
		//cout<<endl;
		for (i = 0; i < M; i++){
			scanf("%d", &a);
			for (j = 2; j <= a; j++){
				B[j]++;
				//cout<<B[j]<<" ";
			}
			//cout<<endl;
		}
		//cout<<endl;
		A[2] += 2*A[4] + A[6] + 3*A[8];
		//cout<<A[2]<<endl;
		A[3] += 2*A[9] + A[6];
		//cout<<A[3]<<endl;
		A[4] = A[6] = A[8] = A[9] = 0;

		B[2] += 2*B[4] + B[6] + 3*B[8];
		//cout<<B[2]<<endl;
		B[3] += 2*B[9] + B[6];
		//cout<<B[3]<<endl;
		B[4] = B[6] = B[8] = B[9] = 0;

		j = 1;
		for (i = 0; i < 10; i++){
			//cout<<j<<" primero"<<endl;
			j &= A[i] == B[i];
			//cout<<A[i]<<" "<<B[i]<<endl;
			//cout<<j<<endl;
		}
		//cout<<endl;
		printf("%s\n", j ? "YES" : "NO");
	}	
	return 0;
}