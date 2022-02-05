/*200*/
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<queue>
using namespace std;

char A[22],B[22],*a,*b;
//int al[1000][1000],
int link[30],TS[1000];
bool use[30];
priority_queue<int,vector<int>,greater<int> > q;
int amm;
vector<<vector> char> al;

void INITIAL()
{
     for (int i=0;i<26;i++)
     {
         al[i][0]=0;
         link[i]=0;
         use[i]=0;
     }
}
void LINK(char x,char y)
{
     use[y-'A']=true;
     use[x-'A']=true;
     link[y-'A']++;
     //al[x-'A'][++al[x-'A'][0]]=y-'A';
     al[x-'A'][0]=y-'A';
     al[x-'A'].push_back(y-'A');
     printf("%c\n", al[x-'A'][0]);

}
void SCAN()
{
     scanf("%s",A);
     use[A[0]-'A']=true;
     a=A;b=B;
     while (scanf("%s",b)!=EOF)
     {
           if (b[0]=='#')break;
           int la=strlen(a),lb=strlen(b);
           for (int i=0;i<min(la,lb);i++)
           {
               if (a[i]==b[i])continue;
               LINK(a[i],b[i]);

               break;
           }
           swap(a,b);
     }
}
void TOPOLOGICAL_SORT()
{
     amm=0;
     for (int i=0;i<26;i++)
     {
         if (use[i])
         {
            amm++;
            if (link[i]==0)
            {
               q.push(i);
            }
         }
     }
     int ptr=0;
     while (!q.empty())
     {
           int k=q.top();
           TS[ptr++]=k;
           q.pop();
           for (int i=1;i<=al[k][0];i++)
           {
               if (--link[al[k][i]]==0)
                  q.push(al[k][i]);
           }
     }
}
int main()
{
    INITIAL();
    SCAN();
    TOPOLOGICAL_SORT();
    for (int i=0;i<amm;i++)
    {
        printf("%c",TS[i]+'A');
    }
    puts("");
    //system ("pause");
    return 0;
}
