class Solution {
public:
    unordered_map<string,string>m;
    int id=0;
    string map="abcdefghijklmnopqrstuvwxyzABCDEF"
                 "GHIJKLMNOPQRSTUVWXYZ0123456789";
    // Encodes a URL to a shortened URL.
    string toshort(int n){
         if (n == 0) return "a";
        string x="";
        while(n){
            x.push_back(map[n%62]);
            n/=62;
        }
        reverse(x.begin(),x.end());
        return x;
    }
    string encode(string longUrl) {
        id++;
        string shorturl="http://tinyurl.com/"+toshort(id);
        m[shorturl]=longUrl;
        return shorturl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return m[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));