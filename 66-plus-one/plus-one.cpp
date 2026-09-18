
// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         vector<int> result;
//         int carry = 1; 

//         for (int i = digits.size() - 1; i >= 0; i--) {
//             int sum = digits[i] + carry;
//             result.push_back(sum % 10);
//             carry = sum / 10;
//         }
//         if (carry > 0) {
//             result.push_back(carry);
//         }
        
            
//         }
//         reverse(result.begin(), result.end());
//         return result;
//     }
// };

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        for(int i=n-1;i>=0;i--)
        {
            if(digits[i]<9)
            {
                digits[i]=digits[i]+1;
                return digits;
            }
            digits[i]=0;
        }
        digits.push_back(1);
        reverse(digits.begin(),digits.end());
        return digits;
    }
};