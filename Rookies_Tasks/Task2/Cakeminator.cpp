#include <iostream>
#include <cmath>
#include <set>
#include <string>
#include <bits/stdc++.h>
 
 
using namespace std;
 

int main()
{
    int a,b,c=0;
    cin>>a>>b;
    int arr1[a]={0},arr2[b]={0};
    for(int i=0; i<a; i++)
    {
        string s;
        cin>>s;
        for(int x=0; x<b; x++)
        {
            if(s[x]=='S'){
                arr1[i]=1;
                arr2[x]=1;
            }
        }
    }
    for(int i=0; i<a; i++)
    {
        for(int x=0; x<b; x++)
        {
            if(arr1[i]==1 &&arr2[x]==1)c++;
        }
    }
    cout<<(a*b)-c<<endl;
 
 
 
    return 0;
}