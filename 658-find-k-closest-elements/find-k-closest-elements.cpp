class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int& k, int& x) {
        pair<int, int> pr; //diff, val
        vector<pair<int, int>> ar;
        vector<int> res;
        for(const auto& it : arr){
            pr.first = abs(it - x);
            pr.second = it;
            ar.push_back(pr);
        }
        sort(ar.begin(), ar.end());
        for(int i = 0; i < k; i++){
            res.push_back(ar[i].second);
        }
        sort(res.begin(), res.end());
        return res;
    }
};