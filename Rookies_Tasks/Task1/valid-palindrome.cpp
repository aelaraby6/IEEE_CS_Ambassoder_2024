class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string t;
    for(int i=0;i<n;i++){
        if(s[i]>='A'&&s[i]<='Z'){
          t+= tolower(s[i]);
        }
        else if(s[i]>='a'&&s[i]<='z'||(s[i]>='0'&&s[i]<='9')){
            t+=s[i];
    }
        else {
            continue;
        }
}
    string a=t;
    reverse(t.begin(),t.end());
    if(a==t) return true;
    else return false;
    }
};