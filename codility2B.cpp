#include <vector>
#include <set>
int solution(int X, vector<int> &A){
	set<int> s;
	for(int i=1;i<=X;i++)s.insert(i);
	for(int i=0;i<A.size();i++){
		s.erase(A[i]);
		if(s.empty())return i;
	}
	return -1;
}