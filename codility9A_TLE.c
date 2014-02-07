#include <vector>
vector<int> solution(vector<int> &A) {
	int N=A.size(),i=0,j,c;
	vector<int>B(N);
	for(;i<N;B[i++]=c)for(j=c=0;j<N;j++)c+=A[i]%A[j]>0;
	return B;
}