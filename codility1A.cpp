#include <vector>
#include <algorithm>
#include <cmath>
int solution(vector<int> &A){
  vector<int> forward(A.size()),reverse(A.size());
  int s=0;
  for(int i=0;i<A.size();i++)forward[i]=s+=A[i];
  s=0;
  for(int i=A.size()-1;i>=0;i--)reverse[i]=s+=A[i];
  s=abs(forward[0]-reverse[1]);
  for(int i=1;i<A.size()-1;i++)s=min(s,abs(forward[i]-reverse[i+1]));
  return s;
}