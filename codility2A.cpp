#include <vector>
int solution(vector<int> &A){
	int N=A.size();
	vector<int>B(N+1);
	for(int i=0;i<N;i++){
		if(A[i]>N)return 0;
		B[A[i]]++;
	}
	for(int i=1;i<=N;i++)if(!B[i])return 0;
	return 1;
}