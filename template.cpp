#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define vi vector<int>
#define vb vector<bool>
#define pii pair<int,int>
#define mod 1000000007
#define ss second
#define ff first
#define vpii vector<pii>
#define vvpii vector<vpii>
#define vvi vector<vi>
#define pb push_back
#define vs vector<string>
#define all(x) x.begin(),x.end()
#define mii map<int,int>
#define vd vector<double>
#define deb(x) cout<<#x<<" -> "<<x<<endl
const int inf=0x3f3f3f3f3f3f3f3f;
#define MAXN 1000005
 
int dx[]={0,1,1,1,0,-1,-1,-1};
int dy[]={1,1,0,-1,-1,-1,0,1};
 
void print(vi &v){
    for(int i=0;i<(long long)v.size();i++)cout<<v[i]<<" ";
    cout<<endl;
}
 
// <--------------------Code Begins Here-------------------->
 
 
 
int power(int x, int y) { 
    int res = 1;
    x = x;
    while (y > 0){
        if (y & 1) 
            res = (res*x);
        y = y>>1;
        x = (x*x); 
    } 
    return res; 
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin>>t;
    while(t--){
       
    }
    return 0;
}
