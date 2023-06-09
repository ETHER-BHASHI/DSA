vector<int> icecreamParlor(int m, vector<int> arr) {
    unordered_map<int, int> mp;
    int s = arr.size();
    
    for (int i = 0; i < s; i++) {
        int first = arr[i];
        int left = m - first;

        if (mp.find(left) != mp.end()) {
            return {mp[left], i + 1};
        }
        
        mp[first] = i + 1;
    }
    
    return {};
}
