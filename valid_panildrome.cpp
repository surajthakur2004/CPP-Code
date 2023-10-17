// 1. remove except alphanumber 
// 2. convert into small alphabet
// 3. check panildrome

class Solution {

    private:
    bool valid(char ch)
    {
        if((ch>='a'&&ch<='z') || (ch>='A'&& ch<='Z') || (ch>='0'&& ch<='9'))
        return 1;
        return 0;
    }

    char toLower(char s)
    {
        char temp=s-'A'+'a';
        return temp;
    }

    bool checkPanildrome(string temp)
    {
        int start=0;
        int end=temp.length()-1;
        while(temp[start++]!=temp[end--])
        {
            return false;
        }
         return true;
    }
   

public:
    bool isPalindrome(string s) {
        string temp=" ";
        for(int i=0; i<s.length();i++)
        {
            if(valid(s[i]))
            temp.push_back(s[i]);
        }
        
        for(int j=0;j<temp.length();j++){
            if(temp[j]>='A'&& temp[j]<='Z')
            temp[j]=toLower(temp[j]);
        }
        return checkPanildrome(temp);
    }
};