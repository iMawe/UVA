#include <iostream>
using namespace std;
long double factorial(int n){
    long double fact;
    if (n==0)
        return 1;
    else
         return n*factorial(n-1);
} 
int main(){
	int N,M,t1=1,t2=1;
	while(1){
		cin>>N>>M;
		if(N==0 & M==0)
			break;
		int a[N],b[M];
		for(int i=0; i<N; i++)
			cin>>a[i];
		for(int i=0; i<M; i++)
			cin>>b[i];

		for(int i=0; i<N; i++){
			t1=t1*factorial(a[i]);
		}
		for(int i=0; i<M; i++){
			t2=t2*factorial(b[i]);
		}
		if (t1==t2)
			cout<<"YES"<<endl;
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}