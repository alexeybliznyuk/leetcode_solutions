class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        std::vector <pair <int,int>> paired_cars_vector;

        for (int i = 0; i != position.size(); i++) {
            pair <int,int> temp_pair;
            temp_pair.first = position[i];
            temp_pair.second = speed[i];
            paired_cars_vector.push_back(temp_pair);
        }
        std::sort(paired_cars_vector.begin(), paired_cars_vector.end());
        for (int i = 0; i != position.size(); i++) {
            std::cout << paired_cars_vector[i].first << "\t" << paired_cars_vector[i].second << std::endl;
            
        }
        std::vector <float> eta_time_vector;

        for (int i = 0; i != position.size(); i++) {
            eta_time_vector.push_back( (target - paired_cars_vector[i].first) /  (float)paired_cars_vector[i].second);
            std::cout << (target - paired_cars_vector[i].first) /  (float)paired_cars_vector[i].second << "\t";
        }
        int answ = 0;
        //int temp = eta_time_vector[eta_time_vector.size() - 1];
        float temp = 0;
        for (int i = position.size() - 1; i != -1; i = i - 1) {
            if (eta_time_vector[i] > temp) {
                temp = eta_time_vector[i];
                answ++;
            }
            
        }

        return answ;
    }   
};
