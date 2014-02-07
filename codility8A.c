int solution(int N){
	int ret=2*(N+1),i=2;
	for(;i*i<=N;i++)if(N%i==0)ret=2*(i+N/i);
	return ret;
}