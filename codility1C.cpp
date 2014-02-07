#include <vector>
int solution(vector<int> &A){
	int N=A.size();
	vector<int>B(N+2);
	for(int i=0;i<N;i++)B[A[i]]++;
	for(int i=1;i<=N+1;i++)if(!B[i])return i;
}