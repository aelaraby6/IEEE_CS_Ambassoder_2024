#include <bits/stdc++.h>

using namespace std;
#define ll long long;


int main() { //3 2 -100
    int n,a,b;
    cin>>n>>a>>b;
    if(abs(b)>n) b=b%n;
    if(abs(b)==n||b==0) cout<<a<<endl;
    else if(b>0) {
        int t=(n-a)+1;
        if(t<b) cout<<1+(b-t)<<endl;
        else if(t==b) cout<<1<<endl;
        else cout<<a+b<<endl;
    }
    else { //3 3 -1
        int c=(a-1);
        if(abs(b)==1) {
            if(a==1) cout<<n<<endl;
            else cout<<a-1<<endl;
        }
        else if(abs(b)==c) cout<<1<<endl;
        else if(abs(b)<c) cout<<a-b<<endl;
        else {
            if((c+1)==abs(b)) cout<<n<<endl;
            else {
                cout<<(n-((abs(b)-c)-1))<<endl;
            }
        }
    }

    return 0;
}
