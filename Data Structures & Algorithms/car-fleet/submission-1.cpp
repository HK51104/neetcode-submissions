class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, int>> cars(n);
        for (int i = 0; i < n; i++)
        {
            cars[i] = {position[i], speed[i]};
        }
        
        sort(cars.rbegin(), cars.rend());  
        
        vector<double> fleets;  
            for (auto& [pos, spd] : cars) 
            {
            double time = (double)(target - pos) / spd;

            if (fleets.empty() || time > fleets.back())
            {
                fleets.push_back(time);
            }
        }
        return fleets.size();
    }
};
