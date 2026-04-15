class Solution {
public:
    string frequencySort(string s) {
    unordered_map<char,int> mp;

    // Step 1: count frequency
    for(char c : s) {
        mp[c]++;
    }

    // Step 2: move to vector
    vector<pair<char,int>> vec(mp.begin(), mp.end());

    // Step 3: sort by frequency (descending)
    sort(vec.begin(), vec.end(), [](auto &a, auto &b){
        return a.second > b.second;
    });

    // Step 4: build result string
    string result = "";

    for(auto it : vec) {
        result += string(it.second, it.first); 
    }

    return result;
}
};