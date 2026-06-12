class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagram;
        for (string s : strs) {
            string key = s;                
            sort(key.begin(), key.end());  
            
            anagram[key].push_back(s);  
        }
        
        vector<vector<string>> ans;
        for (pair<string, vector<string>> p : anagram) {
            ans.push_back(p.second); 
        }
        return ans;
    }
};
