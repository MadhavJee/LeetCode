class Solution {
public:
    double average(vector<int>& sal) {
        int n=sal.size();
        int min=sal[0];
        int max=sal[0];
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=sal[i];
            if(sal[i]<min)min=sal[i];
            else if(sal[i]>max)max=sal[i];
        }
        return ((sum-min-max)/((n-2)*1.00));
        
    }
};