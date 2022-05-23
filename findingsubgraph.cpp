#include<bits/stdc++.h>
using namespace std;
vector<int>gra[30];
bool visited[30];
void dfs(int u){
    visited[u]=true;
    for(int v=0; v<gra[u].size();v++){

        if(visited[gra[u][v]]==false)
            dfs(gra[u][v]);
    }



}
void visitar(int V){
int ans=0;
for(int i=1;i<=V;i++){
    if(visited[i]==false){
        ans++;
        dfs(i);
    }
}
printf("%d\n",ans);
}

int main(){
/*int tc,V;
char  e, a, b;
char str[10];

cin>>tc;
while(tc--){
        memset(visited, false, sizeof(visited));
        cin>>e;
         V=e-'0'-16;
         while(getchar()!='\n');
         while(gets(str)&&scanf(str,"%c%c",&a,&b)==2){

            int u=a-'0'-16;
            int v=b-'0'-16;

            gra[u].push_back(v);
            gra[v].push_back(u);
            visitar(V);


        }



}*/
int TC, V;
	char c, a, b;
	char input[10];

	scanf("%d", &TC);
	while(TC--)
	{
		memset(visited, false, sizeof(visited));
		cin >> c;
		V = c - 'A' +1;
		while(getchar() != '\n');
		while(gets(input) && sscanf(input, "%c%c", &a, &b) == 2)
		{
			int u, v;
			u = a - 'A' +1;
			v = b - 'A' +1;
			gra[u].push_back(v);
			gra[v].push_back(u);
		}
		visitar(V);
    if(TC)
        printf("\n");
        for(int i=0;i<30;i++){
        gra[i].clear();
}




}
return 0;
}
