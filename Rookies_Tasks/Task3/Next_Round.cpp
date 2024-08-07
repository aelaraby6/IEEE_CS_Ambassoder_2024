#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <stack>
#include <string>
#include <bits/stdc++.h>
 
using namespace std;
 
 
 
int main()
{
   int n,k,c=0;
   cin>>n>>k;
   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   int z=arr[k-1];
   for(int i=0;i<n;i++){
      if(arr[i]>=z&&arr[i]>0)
        c++;
   }
   cout<<c<<endl;
 
    return 0;
}