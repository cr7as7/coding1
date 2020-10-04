#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define MOD 1000000007
#define N 100005
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zerobits(x)      __builtin_ctzll(x)
#define w(x)            int x; cin>>x; while(x--)
void p_k_l()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int gcd(int a, int b) { return b ? gcd(b, a%b) : a; }
int lcm(int a,int b) {  return a*b/gcd(a,b); }
int32_t main()
 { 
  p_k_l();
  int i,j;
vector<bool> p(N,true);
p[0]=false;
p[1] =false;
for(i=2;i*i<=N;i++)
{
  if(p[i])
  {
    for(j=i*i;j<N;j+=i)
      p[j]=false;
  }
} 
vector<int> prime;
prime.push_back(2);
for(i=3;i<N;i+=2)
{
  if(p[i])
    prime.push_back(i);
}

  w(t)
  {
int l,r;
cin>>l>>r;
int sum=1;

vector<bool> a(r-l+1,true);
for(i=0;prime[i]*prime[i]<=r;i++)
{
  int cp=prime[i];
  int b=(l/(cp))*cp;
  if(b<l)
    b+=cp;
  for(j=b;j<=r;j+=cp)
    a[j-l]=false;
  if(b==cp)
    a[b-l]=true;
}
for(i=0;i<=r-l;i++)
{
  if(a[i])
  {
    sum=(((sum)%MOD)*((l+i)%MOD))%MOD;
  }
}
cout<<sum<<"\n";
  } 

  return 0;
}