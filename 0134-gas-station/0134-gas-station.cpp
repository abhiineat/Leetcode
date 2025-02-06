class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        vector<int> v;
        int a = 0;
        for (int i = 0; i < cost.size(); i++) {
            a = gas[i] - cost[i];
            v.push_back(a);
        }

        int sum =0, total = 0, start = 0;

        for (int i=0; i < cost.size(); i++) {
            sum += v[i];
            total += v[i];
            if (sum<0) {
                start=i+1;
                sum=0;
            }
        }
        if(total>=0)return start ;
        else return -1;
    }
};
