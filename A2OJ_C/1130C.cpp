// Mistake in BFS & input
/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<int>
#define vd vector<double>
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define minus cout<<"-1\n"
#define pb push_back

bool check(vvi &grid,vvb& visited, int a,int b,int c,int d)
{
    int n=grid.size();
    queue<pair<int,int>>q;
    q.push({a,b});
    int row[4]={1,-1,0,0};
    int col[4]={0,0,1,-1};
    while(!q.empty())
    {
        int x=q.front().first;
        int y=q.front().second;
        //cout<<x<<" "<<y<<endl;
        if(x==c && y==d) return true;
        visited[x][y]=true;
        q.pop();
        for(int i=0;i<4;i++)
        {
            int nx = x+row[i];
            int ny = y+col[i];
            if(nx>=0 && nx<n && ny>=0 && ny<n && !visited[nx][ny]) 
            q.push({nx,ny});
        }
    }
    return false;
}

int dis(int a,int b,int c,int d)
{
    return (a-c)*(a-c) +(b-d)*(b-d);
}

void solve()
{
    int n;cin>>n;
    int a,b,c,d;cin>>a>>b>>c>>d;
    vvi grid(n,vi(n,0));
    vvb visited(n,vb(n,false));
    for(int i=0;i<n;i++) 
    {
        for(int j=0;j<n;j++) cin>>grid[i][j];
    }

    if(check(grid,visited,a,b,c,d)) cout<<0; 
    else
    {
        // vsr -> vector of source && vdes vec of destination
        vector<pair<int,int>> vsr;
        vector<pair<int,int>> vdes;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++) visited[i][j]=false;
        }

        queue<pair<int,int>>q;
        q.push({a,b});
        int row[4]={1,-1,0,0};
        int col[4]={0,0,1,-1};
        while(!q.empty())
        {
            int x=q.front().first;
            int y=q.front().second;
            visited[x][y]=true;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nx=x+row[i];
                int ny=y+col[i];
                if(nx>=0 && nx<n && ny>=0 && ny<n && !visited[nx][ny]) 
                {
                    q.push({nx,ny});
                    vsr.pb({nx,ny});
                }
            }   
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++) visited[i][j]=false;
        }

        q.push({c,d});
        while(!q.empty())
        {
            int x=q.front().first;
            int y=q.front().second;
            visited[x][y]=true;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nx=x+row[i];
                int ny=y+col[i];
                if(nx>=0 && nx<n && ny>=0 && ny<n && !visited[nx][ny]) 
                {
                    q.push({nx,ny});
                    vdes.pb({nx,ny});
                }
            }   
        }

        int ans=INT_MAX;
        for(auto &i:vsr)
        {
            for(auto &j:vdes)
            {
                ans=min(ans,dis(i.first,i.second,j.first,j.second));
            }
        }
        cout<<ans<<endl;
    }
    return;
}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}
*/
// brute force
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
#define vi vector<int>
#define vd vector<double>
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define minus cout<<"-1\n"
#define pb push_back

bool check(vvi &grid,vvb& visited, int a,int b,int c,int d)
{
    int n=grid.size();
    queue<pair<int,int>>q;
    q.push({a,b});
    int row[4]={1,-1,0,0};
    int col[4]={0,0,1,-1};
    while(!q.empty())
    {
        int x=q.front().first;
        int y=q.front().second;
        cout<<x<<" "<<y<<endl;
        if(x==c && y==d) return true;
        visited[x][y]=true;
        q.pop();
        for(int i=0;i<4;i++)
        {
            int nx = x+row[i];
            int ny = y+col[i];
            if(nx>=0 && nx<n && ny>=0 && ny<n && !visited[nx][ny] && grid[nx][ny]==0) 
            {
               visited[nx][ny]=true;
               q.push({nx,ny});
            }
        }
    }
    return false;
}

int dis(int a,int b,int c,int d)
{
    return (a-c)*(a-c) +(b-d)*(b-d);
}

void solve()
{
    int n;cin>>n;
    int a,b,c,d;cin>>a>>b>>c>>d;
    a--,b--,c--,d--;
    vvi grid(n,vi(n,0));
    vvb visited(n,vb(n,false));

    //for(int i=0;i<n;i++) 
    for(int i=0;i<n;i++) 
    {
        string str;
        cin>>str;
        for(int j=0;j<n;j++) {if(str[j]=='1') grid[i][j]=1;}
    }
    for(int i=0;i<n;i++) 
    {
        for(int j=0;j<n;j++) cout<<grid[i][j]<<" ";
        cout<<endl;
    }
    
    //cout<<check(grid,visited,a,b,c,d)<<endl;
    if(check(grid,visited,a,b,c,d)) cout<<0; 
    else
    {
        // vsr -> vector of source && vdes vec of destination
        vector<pair<int,int>> vsr;
        vector<pair<int,int>> vdes;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++) visited[i][j]=false;
        }

        queue<pair<int,int>>q;
        q.push({a,b});
        int row[4]={1,-1,0,0};
        int col[4]={0,0,1,-1};
        while(!q.empty())
        {
            int x=q.front().first;
            int y=q.front().second;
            visited[x][y]=true;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nx=x+row[i];
                int ny=y+col[i];
                if(nx>=0 && nx<n && ny>=0 && ny<n && !visited[nx][ny] && grid[nx][ny]!=1) 
                {
                    visited[nx][ny]=true;             
                    q.push({nx,ny});
                    vsr.pb({nx,ny});
                }
            }   
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++) visited[i][j]=false;
        }

        q.push({c,d});
        while(!q.empty())
        {
            int x=q.front().first;
            int y=q.front().second;
            visited[x][y]=true;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nx=x+row[i];
                int ny=y+col[i];
                if(nx>=0 && nx<n && ny>=0 && ny<n && !visited[nx][ny] && grid[nx][ny]!=1) 
                {
                    visited[nx][ny]=true;
                    q.push({nx,ny});
                    vdes.pb({nx,ny});
                }
            }   
        }

        int ans=INT_MAX;
        for(auto &i:vsr)
        {
            for(auto &j:vdes)
            {
                ans=min(ans,dis(i.first,i.second,j.first,j.second));
            }
        }
        cout<<ans<<endl;
    }
    return;
}

int main()
{
    int t=1;
    while(t--)
    solve();
    
    return 0;
}