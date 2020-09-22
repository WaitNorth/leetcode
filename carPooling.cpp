class Solution {
public:
    
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<pair<int,int>> drops;
        sort(trips.begin(), trips.end(), [](const vector<int> &a, const vector<int> &b) { return a[2] < b[2]; } );
        for(int index=0;index<trips.size();++index){
            drops.push_back(std::make_pair(trips[index][2],trips[index][0]));
        }
        sort(trips.begin(), trips.end(), [](const vector<int> &a, const vector<int> &b) { return a[1] < b[1]; } );
        int result = true;
        int drop=0;
        for(int index=0;index<trips.size();++index){
            while(trips[index][1]>=drops[drop].first){
                capacity+= drops[drop++].second;
            }
            if(capacity-trips[index][0]<0){
                result = false;
                break; 
            }else{
                capacity = capacity-trips[index][0];
            }
        }
        return result;
    }

    //别人优秀的办法
//    bool carPooling(vector<vector<int>>& trips, int capacity){
//         vector<int> stops(1001); 
//         for (vector<int>& trip: trips){
//             stops[trip[1]] += trip[0]; 
//             stops[trip[2]] -= trip[0];
//         }

//         int n = 0; 
//         for (int i = 0; i < 1001; ++i){
//             n += stops[i]; 
//             if (n > capacity) return false;
//         }
//         return true; 
//     }
    
};