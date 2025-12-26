#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define f(i, a, n) for(int i = a; i < n; i++)
#define mp make_pair
#define pb push_back
#define pll pair<ll,ll>
int gcd(int a, int b) { if (!b) return a; return gcd(b, a % b); }  
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
 


 
 
//-----------------//
  #define joshi main
//-----------------//
 
 
int joshi()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(0);
ll t;
cin >> t;
while(t--)
{
	ll n;
	cin >> n;
	string s;
	cin >> s;
	ll a[n];
	char x;
	ll k= INT_MIN;
	int c=0;
	vector<int> p,q,r;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	unordered_map<char,int> mp;
	for(int i=0;i<s.size();i++)
	{
		mp[s[i]]++;
	}
	for(auto i:mp)
	{
		if(i.second>=2)
         {
			x=i.first;
			cout << i.first << endl;
			for(int i=0;i<n;i++)
			{
				if(s[i]==x)
				{
				k = max(k,a[i]);
				}

			}
			p.push_back(k);
		 }
		 if(i.second==1)
		 {
			x= i.first;
			for(int i=0;i<n;i++)
			{
				if(s[i]==x)
				{
				k =a[i];
				}

			}
			p.push_back(k);
		 }
		
	}
	int sum=0,cum=0;
	for(int i=0;i<p.size();i++)
	{
		sum+=p[i];
		
	}
	for(int i=0;i<n;i++)
	{
		cum+=a[i];
		
	}
	
	

		
	cout << cum-sum <<  endl;

}
 
return 0;
}