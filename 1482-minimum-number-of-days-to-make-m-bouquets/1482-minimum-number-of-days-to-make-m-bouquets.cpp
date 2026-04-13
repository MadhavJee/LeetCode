class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long need = 1LL * m * k;
        if(need > bloomDay.size()) return -1;
        int low = 1, high = 1e9;
        while(low < high){
            int mid = low + (high - low) / 2;
            int bouquets = 0, flowers = 0;
            for(int d : bloomDay){
                if(d <= mid){
                    flowers++;
                    if(flowers == k){
                        bouquets++;
                        flowers = 0;
                    }
                } else {
                    flowers = 0;
                }
            }
            if(bouquets >= m) high = mid;
            else low = mid + 1;
        }
        return low;
    }
};