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

int N,K;
int A[1000010];

void solve(){
	int ok=N,ng=-1;
	while(abs(ok-ng)>1){
		int mid=(ok+ng)/2;
		if(A[mid]>=K){
			ok=mid;
		}
		else{
			ng=mid;
		}
	}
	cout<<ok<<endl;
}

signed main(){
	cin>>N>>K;
	REP(i,N){
		cin>>A[i];
	}
	solve();
	return 0;
}
