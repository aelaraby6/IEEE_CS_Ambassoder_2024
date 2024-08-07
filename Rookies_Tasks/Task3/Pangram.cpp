#include <bits/stdc++.h>
using namespace std;
 
int main ()
{
    int n;
    cin>>n;
   if(n<26){
        cout<<"NO";
        return 0;
   }
   char arr[n];
   for(int i=0;i<n;i++){
        char a;
        cin>>a;
        arr[i]=tolower(a);
   }
 
   sort (arr,arr+n);
   int test=0;
   for(int i=0;i<n;i++){
        if(arr[i]!=arr[i+1]){
            test++;
        }
   }
   if(test==26){
        cout<<"YES";
   }
   else{
        cout<<"NO";
   }
 
 
   return 0;
 
}