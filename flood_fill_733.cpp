#include<bits/stdc++.h>
using namespace std;

void dfs(int i, int j, int initialCol, int newCol, vector<vector<int>>& image){
    
    int n,m;
    n=image.size();
    m=image[0].size();
    if(i<0 || j<0) return;
    if(i>=n || j>=m) return;
    if(image[i][j] != initialCol) return;

    image[i][j] = newCol;
    
    dfs(i-1,j,initialCol,newCol,image);
    dfs(i+1,j,initialCol,newCol,image);
    dfs(i,j-1,initialCol,newCol,image);
    dfs(i,j+1,initialCol,newCol,image);
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int initialCol =image[sr][sc];
        dfs(sr,sc,initialCol,newColor, image);
        return image;
    }