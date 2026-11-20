class Solution {
public:
    bool isVowel(char c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c =='E' || c == 'I' || c == 'O' || c == 'U';
    }
    string reverseVowels(string s) {    
        int n = s.size();
        int left=0,right=n-1;
        while(left<right){
            {
                while(left<right && !isVowel(s[left])){
                    left++;
                }
                while(left<right && !isVowel(s[right])){
                    right--;
                }
                if(left<right){
                swap(s[left],s[right]);
                left++;
                right--;
                }
            }
        }

        return s;
        
    }
};






















// class Solution {
// public:
//     string reverseVowels(string s) {    
//         int n = s.size();
//         int i =0, j=n-1;
//         while(i<j){
//             if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i]=='E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
//             swap(s[i],s[j]);
        
//         // i++;
//         // j--;
//         }
//         i++;
//         j--;
//         return s;
        
//     }
// };