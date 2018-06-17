#include <iostream>

#include <vector>

using namespace std;

char Cu[1000][1000],cu[1000][1000];

void girar(int c){
	char cu2;
	for(int i=0; i<c/2; i++){
    	for(int j=0; j<c; j++){
    		swap(cu[i][j],cu[c-1-i][j]);
    	}
    }
	for(int i=0;i<c;i++){
        for(int j=i;j<c;j++){
        	swap(cu[j][i],cu[i][j]);
        }
    }

    
}


int compara2(int c,int x,int y){
	for(int k=0; k<c; k++){
		for(int l=0; l<c; l++){
			if(Cu[k+x][l+y] != cu[k][l]) return 0;
		}
	}
	return 1;
}
int compara(int C, int c){
	int total=0;
	for(int i=0; i<C-(c-1); i++){
		for(int j=0; j<C-(c-1); j++){
			if(Cu[i][j] == cu[0][0]){
				total+=compara2(c,i,j);	
			}
		}
	}
	return total;
}

int main(){
	int C,c,to;
	char a,b;
	vector<int> v;
	while(cin){
		cin>>C;
		cin>>c;
		if((C==0 and c==0) or c>C) {
			break;
		}
		else{
			for(int i=0; i<C; i++){
				for(int j=0; j<C; j++){
					cin>>a;
					Cu[i][j] = a;
				}
			}
			for(int i=0; i<c; i++){
				for(int j=0; j<c; j++){
					cin>>b;
					cu[i][j] = b;
				}
			}
		}
	v.push_back(compara(C,c));
	for(int i=0;i<3;i++){
		girar(c);
		v.push_back(compara(C,c));
		}
	}

	for(int i=0;i<v.size()/4;i++){
		for(int j=0;j<3;j++){
			cout<<v[j+(4*i)]<<" ";
		}
		cout<<v[3+(i*4)]<<endl;
	}

	return 0;
}