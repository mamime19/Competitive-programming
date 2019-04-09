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

int N,M;
string S,T;
int dp[1010][1010];

signed main(){
	cin>>N>>M>>S>>T;
	REP(i,N){
		REP(j,M){
			if(S[i]==T[j]){
				dp[i+1][j+1]=dp[i][j]+1;
			}
			else{
				dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
			}
		}
	}
	cout<<dp[N][M]<<endl;
	return 0;
}
