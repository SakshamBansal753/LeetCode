class Solution {
public:
    
    string majorityFrequencyGroup(string s) {
        if(s.length()==0) return "";
     int freq[26]={0};
        for(char c:s){
            freq[c-'a']++;
        }
        unordered_map<int,int> cnt;

        for(int i=0;i<26;i++)
            if(freq[i]>0)
                cnt[freq[i]]++;

        int bestFreq = 0, mx = 0;
      for (auto &p : cnt) {
        if (p.second > mx || (p.second == mx && p.first > bestFreq)) {
            mx = p.second;
            bestFreq = p.first;
        }
}

        string ans;
        for(int i=0;i<26;i++)
            if(freq[i] == bestFreq)
                ans += char(i+'a');

        return ans;

    }
};