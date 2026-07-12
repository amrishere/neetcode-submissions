class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> result(n, 0);
        int waitingDay;
        stack<int> waitingDays;
        waitingDays.push(0);

        for (int i = 1; i < n; i++){

            while(!waitingDays.empty() 
            && temperatures[waitingDays.top()] < temperatures[i]){
                waitingDay = waitingDays.top();
                result[waitingDay] = i - waitingDay; 
                waitingDays.pop();
            }
            waitingDays.push(i);

        }

        return result;
    }
};
