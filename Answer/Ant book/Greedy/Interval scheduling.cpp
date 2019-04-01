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

int N;
int S[100010],T[100010];
P p[100010];
int ans=0;

void solve(){
	REP(i,N){
		p[i]=make_pair(T[i],S[i]);
	}
	sort(p,p+N);
	int t=0;
	REP(i,N){
		if(t<p[i].second){
			t=p[i].first;
			ans++;
		}
	}
	cout<<ans<<endl;
}

signed main(){
	cin>>N;
	REP(i,N){
		cin>>S[i]>>T[i];
	}
	solve();
	return 0;
}
