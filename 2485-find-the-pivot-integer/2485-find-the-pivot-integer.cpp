class Solution {
public:
    int pivotInteger(int n) {
        vector<int>v1(n);
        vector<int>v2(n);
        int sum=0;
        for(int i=1;i<=n;i++){
            sum+=i;
            v1[i-1]=sum;
        }
        sum=0;
        for(int i=n;i>0;i--){
            sum+=i;
            v2[i-1]=sum;
        }
        // for(int i=0;i<n;i++){
        //     cout<<v2[i];
        // }
        for(int i=0;i<n;i++){
            if(v1[i]==v2[i]){
                return i+1;
            }
        }
        return -1;
    }
};