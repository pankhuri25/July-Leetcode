class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size()-1;
        
        while(n>=0)
        {
            if(digits[n]!=9)
            {
                digits[n]++;
                return digits;
            }
            digits[n]=0;
            n--;
        }
        //digits[digits.size()-1]++;
        vector<int> res(digits.size() + 1,0);
        res[0]=1;
        return res;
    }
};
