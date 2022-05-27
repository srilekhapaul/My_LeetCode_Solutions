class Solution {
public:
    int numberOfSteps(int num) {
        int steps=0;
        while(num>0)
        {
            if(num%2)
                num--;
            else
                num/=2;
            steps++;
        }
        return steps;
    }
};
