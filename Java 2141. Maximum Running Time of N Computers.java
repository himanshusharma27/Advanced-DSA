class Solution {

private boolean possible(int[] batteries, long midTime , int n){
    long target = n * midTime;

    for(int b : batteries){
        target -= Math.min((long) b ,midTime);
        if(target<=0) return true; 
    }
    return target<=0;
}


    public long maxRunTime(int n, int[] batteries) {
         long l = Long.MAX_VALUE; 

         long sum = 0 ;
         for(int b : batteries){
            l = Math.min(l,b);
            sum+=b ;
         }
         long r = sum / n ;

         long result = 0 ;

         while(l<=r){
            long mid = l+(r-l)/2;

          if(possible(batteries , mid , n)){
                result = mid ;
                l = mid + 1 ;
            }else{
                r = mid -1 ;
            }
         }
         return result ;
    }
}
