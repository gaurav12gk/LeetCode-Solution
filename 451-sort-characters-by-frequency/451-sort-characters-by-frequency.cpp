class Solution {
public:
    static   bool cmp(pair<char,int> &a,pair<char,int> &b)
       {
           if(a.second == b.second) return a.first > b.first;
           return a.second > b.second;
       }
    string frequencySort(string s) {
            vector<pair<char,int>> v(123);
            for(int i = 0 ;i<123;i++)
            v[i].second = 0 ; 

            for(auto c: s)
            {
                if(isupper(c))
                {
                    v[c].second++;
                    v[c].first = c;
                }
                else {v[c].second++;v[c].first = c;}
            }

            sort(v.begin(),v.end(),cmp);
            string ss; 
            for(int i = 0 ;i<123;i++)
            {
                if(v[i].second ==0)break;
                while(v[i].second--)
                {
                    ss+=v[i].first;
                }
            }
           return ss;
    }
};