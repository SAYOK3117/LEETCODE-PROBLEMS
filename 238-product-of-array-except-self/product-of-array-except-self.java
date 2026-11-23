class Solution {
    public int[] productExceptSelf(int[] nums) {
        int answer[]=new int[nums.length];
        int prefix=1;
        for(int i=0; i<nums.length; i++){
            answer[i]=prefix;
            prefix*=nums[i];
        }
        int sufix=1;
        for(int  j=nums.length-1; j>=0; j--){
            answer[j]*=sufix;
            sufix*=nums[j];
        }
        return answer;
    }
}