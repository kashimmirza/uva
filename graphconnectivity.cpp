#include<bits/stdc++.h>
using namespace std;
vector<int>g[30];
bool v[30];
void dfs(int cur){
v[cur]=true;
for(int i=0;i<g[cur].size();i++){

    int target = g[cur][i];
    if(!v[target]){

        dfs(target);
    }
}

}




int main(){
int t;
scanf("%d",&t);
getchar();
getchar();
while(t--){

    char str[5];
    gets(str);
    int n=str[0]-'A'+1;
    for(int i=1;i<=n;i++){
        g[i].clear();
    }
    while(gets(str)&&str[0]!='\0'){

        int a=str[0]-'A'+1;
        int b=str[1]-'A'+1;
        g[a].push_back(b);
        g[b].push_back(a);

    }
    int ans=0;
    memset(v,false, sizeof(v));
    for(int i=1;i<=n;i++)
        if(!v[i])
            dfs(i), ans++;


    printf("%d",ans);
    if(t)
        putchar('\n');

}
return 0;

}
