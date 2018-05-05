#include <iostream>
#include <map>
#include <queue>
#include <string>

using namespace std;

int main(){
	int value[36]={2,3,3,4,4,4,5,5,5,5,6,6,6,6,6,7,7,7,7,7,7,8,8,8,8,8,9,9,9,9,10,10,10,11,11,12};
	int j=0,cost=0;
	map<char,int> m;
	string str;
	priority_queue<int> vi;
	for(int i=0; i<str.size(); i++)
		if(str[i]!=' ')
			m[str[i]]++;
	for(auto p:m)
		vi.push(p.second);
	
	while (! vi.empty()){
		cost+=vi.top()*value[j++];
		vi.pop();
	}
	cout<<cost;

	return 0;
}