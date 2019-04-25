#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<utility>
#include<queue>
#include<stack>
#include<set>
#include<map>
#include<unordered_set>
#include<unordered_map>
#include<bitset>
using namespace std;
//#define MODE 1
#ifdef MODE
#define DEB(X) cout<< #X <<": "<<X<<" ";
#define END cout<<endl;
#else
#define DEB(X) {}
#define END {}
#endif
typedef long long ll;
#define int ll
#define uset unordered_set
#define umap unordered_map
typedef std::pair<int,int> P;
struct edge{int to,cost;};
const int INF=100000000000000000;
const int INF2=9223372036854775807;
const int MOD=1000000007;
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define min(X,Y) (((int)(X)<(int)(Y))?(X):(Y))
#define max(X,Y) (((int)(X)>(int)(Y))?(X):(Y))
#define MAX(X,Y) (*max_element(X,Y))
#define MIN(X,Y) (*min_element(X,Y))
#define NP(X,Y) next_permutation(X,Y)

int N,K;
int A[110],B[110];
int dp[100010];

signed main(){
	cin>>N>>K;
	REP(i,N){
		cin>>A[i];
	}
	REP(i,N){
		cin>>B[i];
	}
	REP(i,100010){
		dp[i]=-1;
	}
	dp[0]=0;
	for(int i=0;i<N;i++){
		for(int j=0;j<=K;j++){
			if(dp[j]>=0){
				dp[j]=B[i];
			}
			else if(j<A[i]||dp[j-A[i]]<=0){
				dp[j]=-1;
			}
			else{
				dp[j]=dp[j-A[i]]-1;
			}
		}
	}
	if(dp[K]>=0){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
	return 0;
}
