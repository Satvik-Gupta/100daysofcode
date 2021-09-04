class Solution {
public:
    string reverseWords(string s) {
        
        string ans = "";
        string temp = "";
        for(int i=0; i<s.size() ;i++)
        {
            if(s[i]==' ')
            {
                reverse(temp.begin(),temp.end());
                ans.append(temp+" ");
                temp ="";
                continue;
            }
            temp += s[i];
        }
        
        reverse(temp.begin(),temp.end());
        ans.append(temp);
        
        return ans;
    }
};