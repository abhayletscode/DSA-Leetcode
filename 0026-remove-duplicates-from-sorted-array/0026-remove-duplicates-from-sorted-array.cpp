class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        deque<int>dq;
        

        for(int val : nums) {


            if(dq.size() > 0 && dq.back() == val)
            continue;

            dq.push_back(val);



        }

        int i = 0;

        while(!dq.empty()){
        nums[i++]=dq.front();
        dq.pop_front();}


        return i;



    }
};