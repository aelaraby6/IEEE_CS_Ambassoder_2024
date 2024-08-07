#include <iostream>
#include <set>
using namespace std;
int main()
{
    int y;
    cin>>y;
    int z=y+1;
    bool flag =1;
    while(flag){
        set<int>s;
        int x=z;
        while(x!=0){
            s.insert(x%10);
            x/=10;
        }
        if(s.size()==4){
            cout<<z;
            flag=0;
        }
        z++;
    }
 
    return 0;
}