class Solution {
public:
    string frequencySort(string s) {
       unordered_map<char, int> freq;
        for(int i = 0; i < s.length(); i++){
            freq[s[i]]++;
        }
      vector<pair<char, int>> arr(freq.begin(), freq.end());
        sort(arr.begin(), arr.end(),
             [](pair<char, int> a, pair<char, int> b) {
                 return a.second > b.second;
             });

        // Step 4: Build the answer
        string ans = "";

        for (auto p : arr) {
            ans.append(p.second, p.first);
        }

        return ans;
    }
};