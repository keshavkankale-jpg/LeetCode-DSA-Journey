class Solution {
public:
    int addDigits(int num) {

        if(num<=9){
            return num;
        }

        while(num>9){
            int sum=0;
            int temp=num;
            while(temp!=0){
                int x=temp%10;

                sum=sum+x;
                temp=temp/10;
            }
            num=sum;

        }
        return num;
    }
};