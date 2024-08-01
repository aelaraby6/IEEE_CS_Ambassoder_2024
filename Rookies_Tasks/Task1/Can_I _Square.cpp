#include <bits/stdc++.h>

using namespace std;
#define ll long long;



long long s,a;

int main() {
   int t; cin>>t;
   while(t--){
    int n; cin>>n;
       s=0;
       int arr[n];
       for(int i=0;i<n;i++) {
           cin>>arr[i];
           s+=arr[i];
       }
       a=sqrt(s);
       s==a*a? cout<<"YES\n":cout<<"NO\n";

   }
    return 0;
    }

