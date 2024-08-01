#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
 
int main ()
{
   int t;
   cin>>t;
   while(t--){
        bool flag =1;
        string s;
        cin>>s;
        int t1=s[0]-'0';
        int t2=s[1]-'0';
        int test=(t1*10)+t2;
        if(test<12){
            flag=0;
        }
        test%=12;
        if(test==0){
            cout<<"12";
        }
        else{
                if(test==11||test==10){
                    cout<<test;
                }
                else{
            cout<<"0"<<test;
                }
        }
        cout<<s[2]<<s[3]<<s[4]<<" ";
        if(flag)
            cout<<"PM";
        else
            cout<<"AM";
        cout<<endl;
 
   }
   return 0;
 
}