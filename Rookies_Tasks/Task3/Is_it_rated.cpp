#include <iostream>
#include <map>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        if(a[i]!=b[i]){
            cout<<"rated";
            return 0;
        }
    }
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]){
            cout<<"unrated";
            return 0;
        }
    }
    cout<<"maybe";
    return 0;
}