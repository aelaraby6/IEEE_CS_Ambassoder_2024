#include <bits/stdc++.h>

using namespace std;
#define ll long long;


int main() {
    int n; cin>>n;
    if(n%2==0) {
        cout<<n/2<<endl;
        for(int i=0;i<n/2;i++) {
            cout<<2<<" ";
        }
        cout<<endl;
    }
    else if(n==3) {
        cout<<1<<"\n"<<3<<endl;
    }
    else {
        cout<<((n-3)/2)+1<<endl;
        for(int i=0;i<(((n-3)/2));i++) {
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }
    return 0;
}
