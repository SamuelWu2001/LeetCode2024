class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> result;

        for(int i=0;i<asteroids.size();i++) {
            if (result.empty())
                result.push_back(asteroids[i]);
            else if (result.back()>0 && asteroids[i]<0) {
                bool flag = true;
                while(result.back()>0 && asteroids[i]<0) {
                    if (-asteroids[i] < result.back()){
                        flag = false;
                        break;
                    }
                    else if (-asteroids[i] == result.back()) {
                        flag = false;
                        result.pop_back();
                        break;
                    } else {
                        result.pop_back();
                        if (result.empty())
                            break;
                    }
                }
                if (flag)
                    result.push_back(asteroids[i]);
            } else {
                result.push_back(asteroids[i]);
            } 
        }
        return result;
    }
};
