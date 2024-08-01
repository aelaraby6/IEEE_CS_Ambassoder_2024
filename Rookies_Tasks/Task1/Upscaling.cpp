#include <bits/stdc++.h>

using namespace std;
#define ll long long;

int t,n,c=0;
string a="##";
string b="..";
int main(){
  cin>>t;
    while(t--) {
        cin>>n;
        for(int i=1;i<=(n*2);i++) {
            c++;
            for(int x=1;x<=n;x++) {
                if(x%2==0) cout<<b;
                else cout<<a;
            }
            if(c==2) {
                swap(a,b);
                c=0;
            }
            if(i!=n*2)
                cout<<endl;
        }
        a="##";
        b="..";
        cout<<endl;
    }
    return 0;
}
