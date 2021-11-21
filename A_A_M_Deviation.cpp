#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double
#define mod 1000000007
// #define in(x,y,z,m,n,k) cin>>x>>y>>z>>m>>n>>k
// #define MOD1 998244353
// #define inf 1e18
// #define pb push_back
// #define ppb pop_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define PI 3.141592653589793238462
// #define set_bits __builtin_popcountll
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()
// typedef long long ll;
// typedef unsigned long long ull;
// typedef long double lld;
// typedef double db;
// typedef char ch;
// #define pll pair<ll, ll>
// #define mpll map<ll, ll>
// #define mpch map<ch, ll>
// #define vll vector<ll>
// #define vpll vector<pll>
// #define str string
// #define si size()
// typedef char ch;
// #define be begin()
// #define en end()
// #define vector v
// #define vs vector<string>
// #define vc vector<char>
// #define ppi pair<int,pair<int,int>
// #define minh  priority_queue <int, vector<int>, greater<int> >
// #define min_pair  priority_queue <ppi, vector<ppi>, greater<ppi> >
// #define maxh  priority_queue <int>
// #define max_pair  priority_queue <ppi>
// #define sll set<ll>
// #define loop(i,n) for(int i = 0; i < n; ++i)
// #define pi 3.14159265358979323846264338327
// #define nope string::npos
// #define max2(a,b) ((a<b)?b:a)
// #define max3(a,b,c) max2(max2(a,b),c)
// #define min2(a,b) ((a>b)?b:a)
// #define min3(a,b,c) min2(min2(a,b),c)
// #define ln "\n"
// #define vasort(v) sort(v.begin(), v.end())
// #define vdsort(v) sort(v.begin(), v.end(),greater<ll>())
// #define out1(x1) cout << x1 << ln
// #define out2(x1,x2) cout << x1 << " " << x2 << ln
// #define out3(x1,x2,x3) cout << x1 << " " << x2 << " " << x3 << ln
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
/*
© 2021 By Divij Katyal
*/
/*..............................................................................................................................
 
							            Divij Katyal
 
...............................................................................................................................*/
 
 
/*/-----------------------------Macro Ends----------------------------------/*/
void SieveOfEratosthenes(int n,vector<int> &primes)
{
    // Create a boolean array
    // "prime[0..n]" and initialize
    // all entries it as true.
    // A value in prime[i] will
    // finally be false if i is
    // Not a prime, else true.
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed,
        // then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples
            // of p greater than or
            // equal to the square of it
            // numbers which are multiple
            // of p and are less than p^2
            // are already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    for (int p = 2; p <= n; p++)
        if (prime[p])
            primes.push_back(p*p);
}
int countSetBits(int n)
{
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
bool check(int *arr, int n, int val)
{
    for(int i=0;i<n;i++)
    {
        if (arr[i] == val)
        {
            return true;
        }
    }
    return false;
}
int counter=0;
void dfs(int node, vector<int> &vis, vector<int> adj[], vector<int> &storeDfs) {
        storeDfs.push_back(node); 
        vis[node] = 1; 
        for(auto it : adj[node]) {
            if(!vis[it]) {
                dfs(it, vis, adj, storeDfs); 
                counter++;
            }
        }
    }
    vector<int>dfsOfGraph(int V, vector<int> adj[]){
	    vector<int> storeDfs; 
	    vector<int> vis(V+1, 0); 
      for(int i = 1;i<=V;i++) {
        if(!vis[i]) dfs(i, vis, adj, storeDfs); 
      }
	    return storeDfs; 
	}
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;
        for (int i=0; i<nums.size(); i++) {
            if (!dq.empty() && dq.front() == i-k) dq.pop_front();
            
            while (!dq.empty() && nums[dq.back()] < nums[i])
                dq.pop_back();
            
            dq.push_back(i);
            if (i>=k-1) ans.push_back(nums[dq.front()]);
        }
        return ans;
}
int fact(int a,int m)
{
    int ans=1;
    while(a>1)
    {
        ans*=a;
        ans%=m;
        a--;
    }
    return ans;
}
int ceil_val(int a,int b){
    return (a / b) + ((a % b) != 0) ;
}
double root(int a,int b,int c){
    double discriminant = b*b - 4*a*c;
    double x1 = (-b + sqrt(discriminant)) / (2*a);
    //double x2 = (-b - sqrt(discriminant)) / (2*a);
    // if(x1>0){
    //     return x1;
    // }
    return x1;
}
void solve(){
    int x,y,z;
    cin>>x>>y>>z;
    if(abs(x+z-2*y)%3==0){
        cout<<"0"<<endl;
    }
    else{
        cout<<"1"<<endl;
    }
}
signed main(){
    // fast();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;  
}
