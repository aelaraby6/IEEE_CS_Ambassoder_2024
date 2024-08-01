
class Solution {
public:
    static vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n-1;i++) {
            int maxx=0;
            for(int x=i+1;x<n;x++) {
                maxx=max(maxx,arr[x]);
            }
            arr[i]=maxx;
        }
        arr[n-1]=-1;
        return arr;
    }
};

