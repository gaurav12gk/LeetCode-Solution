class Solution {
public:
    vector<int> parent;
    int Find(int a)
    {
        if(parent[a]==-1)return a;
        return parent[a] = Find(parent[a]);
        
    }
void Union(int a,int b)
{
    a = Find(a);
    b = Find(b);
    parent[b] = a; 
}
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        parent.resize(s.size()+1,-1);
        
        for(int i = 0 ;i<pairs.size();i++)
        {
           
            {
                if(Find(pairs[i][0])!=Find(pairs[i][1]))
                {
                    Union(pairs[i][0] , pairs[i][1]);
                }
            }
        }
           map<int, string> m;

    for (int i = 0; i < s.size(); i++)
    {
            if(parent[i]==-1)
            m[i]+=s[i];
            else m[Find(i)]+=s[i];
    
    }
        
        
    for(auto &c : m)
    {  
        sort(c.second.rbegin(),c.second.rend());

    }
    for(int i = 0 ;i<s.size();i++)
    {
        if(parent[i]==-1)
        {
            s[i] = m[i].back();
            m[i].pop_back();
        }
        else{
            s[i] = m[Find(i)].back();
            m[Find(i)].pop_back();
        }
    }
        return s;
     
    }
};