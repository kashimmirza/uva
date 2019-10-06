#include<bits/stdc++.h>
using namespace std;
int main(){
  int a[10000];
  long long x;
  int i=1;x=0;
  while(cin>>x){
     a[i++]=x;

  }
 for(int j=1;j<i;++j){
     sort(a+1,a+j+1);
     if(j%2){
      cout<<a[(1+j)/2]<<endl;
     }
     else
      cout<<(a[j/2]+a[j/2+1])/2<<endl;


  }



}
