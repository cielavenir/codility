#include <vector>
#include <algorithm>
vector<int> solution(int N, vector<int> &A){
	vector<int>B(N);
	for(int i=0;i<A.size();i++){
		if(A[i]<=N)B[A[i]-1]++;
		else{
			int m=*max_element(B.begin(),B.end());
			for(int j=0;j<N;j++)B[j]=m;
		}
	}
	return B;
}