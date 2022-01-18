class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int ans = 0;
        if (n == 0)
            return true;
        if (flowerbed.size() == 1)
        {

            if ( flowerbed[0] == 0)
                return true;
            return false;
        }
        for (int i = 0; i < flowerbed.size(); i++)
        {
            if (i == 0)
            {
                if (flowerbed[i] == 0 and flowerbed[i + 1] == 0)
                {
                    ans++, flowerbed[i] = 1;
                }
            }
            else if (i == flowerbed.size() - 1)
            {
                if (flowerbed[i] == 0 and flowerbed[i - 1] == 0)
                    ans++, flowerbed[i] = 1;
            }
            else if (flowerbed[i] == 0)
            {
                if (flowerbed[i - 1] == 0 and flowerbed[i + 1] == 0)
                {
                    ans++;
                    flowerbed[i] = 1;
                }
            }
        }

        if (ans >= n)
            return true;
        return false;
    }
};