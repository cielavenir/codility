#include <vector>
int solution(vector<int> &A){
	int cur=0,r=0;
	for(int i=0;i<A.size();i++){
		if(A[i]==0)cur++;
		else r+=cur;
		if(r>1000000000)return -1;
	}
	return r;
}