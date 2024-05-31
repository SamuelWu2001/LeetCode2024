class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
    	vector<int> distance;
    	for (int i=0;i<s.size();i++)
    		distance.push_back(abs(s[i]-t[i])); 

    	// sliding window
    	int front = 0, end = -1;
    	int maxLength = 0;
        int sum = 0; 
        while(end < (int)distance.size()-1) {
        	end += 1;
        	sum += distance[end];
            while(sum>maxCost) {
            	sum -= distance[front];
            	front ++;
            }
        	maxLength = max(maxLength , (end-front+1)); 
        }
        return maxLength ;
    }
};
