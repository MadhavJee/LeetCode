class Solution {
    public int maxArea(int[] height) {
        int st=0;
        int en=height.length-1;
        int maxcap=0;
        while(st<en){
            int h=Math.min(height[st],height[en]);
            int wid=en-st;
            int currcap=h*wid;
            maxcap=Math.max(currcap,maxcap);
            if(height[st]<height[en]){
                st++;
            }
            else{
                en--;
            }
        }
        return maxcap;
        
    }
}