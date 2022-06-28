#include<iostream>
#include<climits>
using namespace std;
int main(){
int i,j,p,temp,maxi,mini,n=10,a[10];
for(i=0;i<n;i++)cin>>a[i];
cout<<"Before Sort"<<endl;
for(int i:a)cout<<i<<" ";
for(i=0;i<n;i++){
    maxi = INT_MAX;
    p=i;
    for(j=i;j<n;j++){
        if(a[j]<maxi){
            maxi=a[j];
            p=j;
        }
    }
    cout<<a[p];
    if(a[i]>a[p]){
        temp = a[i];
        a[i]= a[p];
        a[p]=temp;
    }


}
cout<<endl;
cout<<"after sort"<<endl;
for(int i:a)cout<<i<<" ";


}
