class Solution {
public:
    int numberOfSteps(int num) {
        int ns = 0;
        while(  num!= 0){
            if(num%2 == 0){
                num = num/2;
                ns++;
            }
            else{
                num = num - 1;
                ns++;
            }
        }
        return ns;
    }
};