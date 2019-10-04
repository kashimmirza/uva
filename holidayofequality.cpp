#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<int>myvector(n);

   for(int i=0;i<n;i++){
    cin>>myvector[i];


   }
   if(n==1){
    cout<<"0"<<endl;
   }
   else {
   sort(myvector.begin(),myvector.end());
 int max= myvector[myvector.size()-1];
   int sum=0;
   for(int i=0;i<myvector.size()-1;i++){
     sum+=max-myvector[i];


   }
   cout<<sum<<endl;
   }



}
