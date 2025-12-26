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
 string s;
 cin >> s;
 int x = stoi(s);
 int y = x*2;
 string ans = to_string(y);
 return ans;
 cout << y <<endl;
return 0;
}