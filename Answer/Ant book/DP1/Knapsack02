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
#define ARDEB(i,X) cout<< #X <<"["<<i<<"]: "<<X[i]<<" ";
#define END cout<<endl;
#else
#define DEB(X) {}
#define ARDEB(i,X) {}
#define END {}
#endif
typedef long long ll;
#define int ll
#define uset unordered_set
#define umap unordered_map
typedef pair<int,int> P;
struct edge{int to,cost;};
#define REP(i,n) for(int i=0;i<(n);i++)
const int INF=100000000000000000;
const int MOD=1000000007;

int N,W;
int w[110],v[110];
int dp[105][10005];

signed main(){
	cin>>N>>W;
	REP(i,N){
		cin>>w[i]>>v[i];
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<=W;j++){
			if(j-w[i]<0){
				dp[i+1][j]=dp[i][j];
			}
			else{
				dp[i+1][j]=max(dp[i][j],dp[i+1][j-w[i]]+v[i]);
			}
		}
	}
	cout<<dp[N][W]<<endl;
	return 0;
}
