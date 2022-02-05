#include<iostream>
#include<cstdio>
#include<stack>
#include<map>
#include<cstring>
#include<vector>


using namespace std;


int visited[100];
vector < vector<int> >L(100);
int m,n;
stack<int>stk;


void topologicalUtil(int k)
{
    visited[k]=1;
    for(int i=0;i<L[k].size();i++)
    {
        if(visited[L[k][i]]==0)
        {
            topologicalUtil(L[k][i]);
        }
    }
    stk.push(k);
}

void topologicalSort()
{

    for(int i=0;i<100;i++) visited[i]=0;
    for(int i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            topologicalUtil(i);
        }
    }
    while(stk.empty()==false)
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }
    cout<<endl;

}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    int a,b;
    while(1)
    {
        for(int i=0;i<100;i++) L[i].clear();
        cin>>n>>m;
        if(n==0 && m==0) break;
        for(int i=0;i<m;i++)
        {
            cin>>a>>b;
            L[a].push_back(b);
        }
        topologicalSort();
    }
    return 0;
}
