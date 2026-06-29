class Solution {
public:
    bool isSameAfterReversals(int num) {
        int val=num;
        int rev1=0;
        int rev2=0;
        while(val){
            rev1=rev1*10+(val%10);
            val/=10;
        }
        while(rev1){
            rev2=rev2*10+(rev1%10);
            rev1/=10;
        }
        if(rev2==num)return true;
        else return false;        
    }
};