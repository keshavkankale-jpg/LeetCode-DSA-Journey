class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int mid = n / 2;

        int leftSum = 0;
        int rightSum = 0;
        int leftQ = 0;
        int rightQ = 0;

        for (int i = 0; i < mid; i++) {
            if (num[i] == '?')
                leftQ++;
            else
                leftSum += num[i] - '0';
        }

        for (int i = mid; i < n; i++) {
            if (num[i] == '?')
                rightQ++;
            else
                rightSum += num[i] - '0';
        }

        // Odd number of '?' -> Alice wins
        if ((leftQ + rightQ) % 2 == 1)
            return true;

        // Bob can force equal sums only in this exact signed condition
        return 2 * (leftSum - rightSum)
               != 9 * (rightQ - leftQ);
    }
};