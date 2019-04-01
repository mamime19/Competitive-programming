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
string S;

void solve(){
	int a=0,b=N-1;
	while(a<=b){
		bool leftflag=false;
		for(int i=0;a+i<=b;i++){
			if(S[a+i]<S[b-i]){
				leftflag=true;
				break;
			}
			else if(S[a+i]>S[b-i]){
				leftflag=false;
				break;
			}
		}
		if(leftflag==true){
			cout<<S[a];
			a++;
		}
		else{
			cout<<S[b];
			b--;
		}
	}
	cout<<endl;
}

signed main(){
	cin>>N>>S;
	solve();
	return 0;
}
