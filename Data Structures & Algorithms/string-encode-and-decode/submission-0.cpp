class Solution {
public:

    string encode(vector<string>& strs) {

string s="";
for(string &s1:strs)
{
    s+=to_string(s1.length());
    s+='#';
    s+=s1;
}
return s;
    }

    vector<string> decode(string s) {
int i=0;
vector<string> ans;
while(i<s.length())
{
    string index="";
     while(s[i]!='#')
     {
        index+=s[i];
        i++;
     }
     int num=stoi(index);
     string out="";
     i++;
     while(num>0){
        out+=s[i];
        i++;
        num--;
     }
     ans.push_back(out);

}
return ans;
    
    }
};
