class Solution {
    public boolean isPerfectSquare(int num) {
       if(num<1) return false;

       long left=1;
       long right=num;

       while(left<=right){
         long mid=left+(right-left)/2;
        

        if(mid*mid<num){
            left=mid+1;
        }
        else if(mid*mid>num){
            right=mid-1;
        }
        else{
            return true;
        }
       }
       return false;
    }
}