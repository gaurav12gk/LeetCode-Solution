class Solution
{
public:
    int longestMountain(vector<int> &v)
    {
        ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0);
        int ans = 0;
        int i = 0, j = 1;
        while (j < v.size())
        {
            if (v[j] > v[j - 1])
            {
                while (j < v.size() and v[j] > v[j - 1])
                {

                    j++;
                }

                while (j < v.size() and v[j] < v[j - 1])
                {

                    ans = max(ans, j - i + 1);
                    j++;
                }

                j--;
            }
            i = j;
            j++;
        }
        return ans;
    }
};