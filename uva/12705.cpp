#include <iostream>
#include <map>
#include <queue>
#include <string>

using namespace std;

int main(){
	int value[36]={2,3,3,4,4,4,5,5,5,5,6,6,6,6,6,7,7,7,7,7,7,8,8,8,8,8,9,9,9,9,10,10,10,11,11,12};
	int c,cost=0;
	map<char,int> m;
	string str;
	cin>>c;
	c=c+1;
	while(c!=0){
		if(c!=0){
			c--;
			priority_queue<int> vi;
			getline (cin,str);//CALL DEA
			for(int i=0; i<str.size(); i++)
				if(str[i]!=' ')
					m[str[i]]++;
			for(auto p:m){
				vi.push(p.second);
				cout<<vi.top()<<"(1)"<<endl;
			}
			int j=0;
			while (!vi.empty()){
				cost+=vi.top()*value[j++];
				cout<<vi.top()<<"(2)"<<endl;
				vi.pop();
			}
			if(cost!=0)
				cout<<cost<<endl;				
		}
		cost=0;
	}
	//return 0;
}