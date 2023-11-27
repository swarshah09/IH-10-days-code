class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;

        for (const auto& customerAccounts : accounts) {
            int currentWealth = 0;
            for (int accountAmount : customerAccounts) {
                currentWealth += accountAmount;
            }
            if (currentWealth > maxWealth) {
                maxWealth = currentWealth;
            }
        }
        return maxWealth;
    }
};