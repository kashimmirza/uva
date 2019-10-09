#include<bits/stdc++.h>
using namespace std;
int main(){
   /* int n=49;

    int *p=&n;
    cout<<*p<<endl;
    int *ptr=new int[4];
    for(int i=0;i<4;i++){
        cin>>*ptr;


    }
    for(int i=0;i<4;i++){
        cout<<*ptr<<endl;

    }*/
   // delete[]ptr;
   int some=10;

    int *a= new int;
    char *b= new char[5];
    float *c=new float[3*some+1];
    double **d=new double*[10];
    delete a;
    delete[] b;
     delete[]c;
    delete[] d;
    int *k=new int[5];
    int m;
    cin>>m;

    cout<<k<<endl;
    for(int i=0;i<m;i++){
        cin>>*(k+i);
    }
    cout<<k<<endl;

    /*for(int i=0;i<m;i++){
        cout<<*k++<<endl;
    }*/






}



