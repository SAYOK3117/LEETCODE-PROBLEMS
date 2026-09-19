class Solution {
public:
    int mySqrt(int x) {
        
        // 1st method lineR SEarch
        // if(x==0 || x==1) return x;
        // int ans = 0;
        // for ( long long i=0; i<=x;i++){
        //     if(i*i <=x)  ans = i;
        // }
        // return ans;

        //2md method
        // int ans = 0;
        // for ( long long i=0; i<=x;i++){
        //     if(i*i <= x) ans =i;
        //     else break;
        // }
        // return ans ;

        //3rd method
        if(x<2) return x;
        long  left =1 , right = x/2, ans =0;
        while(left<=right){
            long  mid = left + (right - left)/2;
            if(mid*mid==x) return mid;
            else if(mid*mid<x)
            {
                ans = mid;
                left = mid+1;

            }
            else{
                right = mid-1;
            }
             mid = left + (right - left)/2;

        }
        return ans ;





        // 
        // if(x<2) return x;
        // int left =1 , right = x/2, ans =0;
        // while(left<=right){
        //     int mid = left + (right - left)/2;
        //     if(mid<=x/mid){
        //         ans = mid;
        //         left = mid+1;

        //     }
        //     else{
        //         right = mid-1;
        //     }

        // }
        // return ans ;


        
    }
};