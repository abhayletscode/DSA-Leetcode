class Solution {
public:
    bool isBalanced(string num) {


        int bal = 0 ;

        for(int i = 0 ; i < num.size() ; i++) {
            if(i % 2 ==0)
            bal += ((int)num[i] - 48);
            else
            bal -= ((int)num[i] - 48);

        }
        return bal == 0;
    }
};