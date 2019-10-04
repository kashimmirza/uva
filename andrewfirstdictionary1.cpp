#include<cstdio>
#include<cstring>
#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{

    char c;
    string s="";
    map<string,int>k;
    map<string,int>::iterator i;
    while(scanf("%c",&c)!=EOF)
    {
        if(c>='a' && c<='z')
            s+=c;
        else if(c>='A' && c<='Z')
            c+=32,s+=c;
        else
        {
            cout<<k[s]++<<" ";
            //cout<<set[s]<<" "<<endl;
            s="";
        }
    }
    for (i = k.begin(); i != k.end(); i++)
    {
        if(i->first!="")
            cout<<i->first<<endl;
    }
    return 0;
}
