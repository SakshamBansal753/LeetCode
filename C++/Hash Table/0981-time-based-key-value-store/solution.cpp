class TimeMap {
    unordered_map<string,vector<pair<int,string>>>m;
public:
    TimeMap() {
    }
    void set(string key, string value, int timestamp) {
        m[key].push_back({timestamp,value});
    }
    string get(string key, int timestamp) {
        if(m.find(key)==m.end()){
            return "";
        }
        vector<pair<int,string>>&temp=m[key];
        int n=temp.size();
        int lo=0;
        int high=n-1;
        string ans="";
        while(lo<=high){
            int mid=lo+(high-lo)/2;
            if(temp[mid].first<=timestamp){
                ans=temp[mid].second;
                lo=mid+1;
            }else{
                high=mid-1;
            }
        }
        return ans;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */