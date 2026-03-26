class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=0,high=0;
        for(int w:weights){
            low=max(low,w);
            high+=w;
        }
        while(low<=high){
            int mid=(low+high)/2;
            int x=1,c=0;
            for(int w:weights){
                if(c+w>mid){
                    x++;
                    c=0;
                }
                c+=w;
            }
            if(x<=days)high=mid-1;
            else low=mid+1;
        }
        return low;
        
    }
};