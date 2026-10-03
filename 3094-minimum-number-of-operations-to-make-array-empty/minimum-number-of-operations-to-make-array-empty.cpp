class Solution {
public:
    int minOperations(vector<int>& tasks) {
        unordered_map<int, int> freq;
        int ans = 0;
        for (int x : tasks) {
            freq[x]++;
        }
        for(auto i : freq){
            int n = i.second;
            if(n==1) return -1;
            else if(n%3==0) ans+= n/3;
            else if(n%3==1) ans+= n/3+1;
            else if(n%3==2) ans+=n/3-1+2; 
        }
        return ans;
    }
};