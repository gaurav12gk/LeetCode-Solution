class Solution {
public:
    bool asteroidsDestroyed(int masses, vector<int>& asteroids) {
     sort(asteroids.begin(),asteroids.end());
        long long k = masses;
        for(auto c: asteroids)
            if(c > k)return false;
        else k+=c;
        return true;
    }
};