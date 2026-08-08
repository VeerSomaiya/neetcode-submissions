class Solution {
public:
    bool isPalindrome(string s) {
        string in="";
        for(char &c:s)
        {if(isalnum(c)){
            c=tolower(c);
        in+=c;
        }

        }
        string rev=in;
        reverse(in.begin(),in.end());
        if(rev==in)
        return true;

        return false;

        

    }
};
