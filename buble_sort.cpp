#include<iostream>
using namespace std;
int main(){
 int i,j,k,m,temp,p,n=10,a[10];
for(i=0;i<n;i++)cin>>a[i];
cout<<"Before sorted"<<endl;
for(int n: a)cout<<n<<" ";
 for(i=0;i<n;i++){
    for(j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
               temp = a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
        }
    }
 }
 cout<<"after sorted"<<endl;
 for(int n:a){
    cout<<n<<" ";
 }





}
