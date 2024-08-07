#include <bits/stdc++.h>
 
using namespace std;
#define ll long long;
 
string a="I hate",b="I love",c="I hate that I love that",d="I hate it";
 
int main() {
   int n; cin>>n;
    for(int i=1;i<=n;i++) {
        if(i%2==0) cout<<b<<" ";
        if(i%2!=0) cout<<a<<" ";
        if(i==n) cout<<"it"<<endl;
        if(i!=n) cout<<"that ";
    }
    return 0;
}