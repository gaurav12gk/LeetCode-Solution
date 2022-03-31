class Solution {
public:
      int dx[4]={-1,0,1,0};
     int dy[4]={0,1,0,-1};
   
    bool isvalid(int x,int y, int n , int m )
    {
        if(x<0 or y<0 or x> n-1 or y>m-1)return false; 
        return true;
    }
 void bfs(int newc ,int sr, int sc, vector<vector<int>> &image)
    {
 int co = image[sr][sc];
     queue<pair<int,int>> q;
     q.push({sr,sc});
     image[sr][sc] = newc;
     while(!q.empty())
     {
        pair<int,int> p = q.front(); 
         q.pop(); 
         for(int i = 0 ;i<4;i++)
         {
 if(isvalid(p.first+dx[i], p.second+dy[i],image.size(),image[0].size()))
            {
     if(  image[p.first+dx[i]][p.second+dy[i]]==co)
             {   image[p.first+dx[i]][p.second+dy[i]] = newc;
            q.push({p.first+dx[i] , p.second+dy[i]});}
    // visited[p.first+dx[i]][p.second+dy[i]]=true;
            }
         }
     }
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
//vector<vector<bool>> visited(image.size()+1,vector<bool>(image[0].size+1,false));
            if(image[sr][sc] == newColor)return image;
        bfs(newColor,sr,sc,image);
        return image;
    }
};