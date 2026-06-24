class Solution {
public:
    int lengthOfLastWord(string s) {

        // remove backward spaces
        while(s[s.size()-1]==' ') {
           s.pop_back();
        }

        //count the letters

        int count = 0;
        int i = s.size()-1;

        while( i>=0 && s[i]!=' '){

            count++;
            i--;
        }

        return count ;
        
    }
};