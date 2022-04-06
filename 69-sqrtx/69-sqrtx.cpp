
        class Solution {
public:
    int mySqrt(int x) {
        int low=0, high=x, sqRoot=0;
        
        while(low<=high)
        {
           long long mid=low+ (high-low)/2;
          //  sqRoot= pow(x,0.5);
            if(mid * mid <= x)
            {sqRoot=mid;
             low=mid+1;}
                
            else
                high=mid-1;
   
               
        }
        return sqRoot;
    }
};