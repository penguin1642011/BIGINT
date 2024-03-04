#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define MOD 1000000007
const int MAXN = 1e6+7;
vector<ll> topo;
static ll in[1000];
ll dx[8] = {-1,0,0,1,-1,-1,1,1};
ll dy[8] = {0,-1,1,0,-1,1,-1,1};
static ll Hash,base = 131,k,n,a[MAXN],b[MAXN];
string dp[127][127];
string hieu(string a,string b){
    while(a.size()<b.size())a = '0'+a;
    while(a.size()>b.size())b = '0'+b;
    ll note = 0,i;
    string ans;
    for (i = a.size()-1;i >= 0;i--){
        ans = char((int(a[i]-48)-int(b[i]-48)+10-note)%10+48)+ans;
        note = (int(a[i])-int(b[i])-note+10<=9);
    }
    while(ans[0]=='0')ans.erase(ans.begin());
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //freopen("ROBOT.INP","r",stdin);
    //freopen("ROBOT.OUT","w",stdout);
    static ll tt,xx,y,x,z,yy,d,j,l,r,lo,rr,i,res,m,ans,index,note,cnt;
    string st,ss,stt,sss,str,s;
    cin >> s >> st;
    cout << hieu(s,st);
    return (0^0)&(200+10);
}
/*
bang mau
$ bobseesanna
b 10100000000
o  1000000000
b   100000000
s    10010000
e     1100000
e      100000
s       10000
a        1001
n         110
n          10
a           1
  III
I 137
I  13
I   1
*/