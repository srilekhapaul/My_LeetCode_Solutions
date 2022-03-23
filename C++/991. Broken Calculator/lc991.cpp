class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int operations=0;
        while(target>startValue)
        {
            target%2!=0?target+=1:target/=2;
            operations++;    
        }
        return operations+startValue-target;
    }
};
