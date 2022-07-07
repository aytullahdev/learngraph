#include<iostream>
int temp[1000004];
using namespace std;
void mergee(int a[],int start,int mid,int end){
    int tempos=start,fap=start,sap=mid+1;
    int i,j;
    while(fap<=mid && sap<=end){
        if(a[fap]<=a[sap]){
            temp[tempos]=a[fap];
            tempos++;
            fap++;
        }else{
           temp[tempos]=a[sap];
            tempos++;
            sap++;

        }
    }
    while(fap<=mid){
        temp[tempos]=a[fap];
            tempos++;
            fap++;
    }
    while(sap<=end){
        temp[tempos]=a[sap];
            tempos++;
            sap++;
    }
    for(i=start;i<=end;i++){
        a[i]=temp[i];
    }


}
void sortt(int a[],int start,int end){
  int mid;
  if(start>=end){
    return;
  }
  mid=(end+start)/2;
  sortt(a,start,mid);
  sortt(a,mid+1,end);
  mergee(a,start,mid,end);


}
int main(){
int i,j,k,n;
cin>>n;
int a[n];
for(i=0;i<n;i++)cin>>a[i];

sortt(a,0,n-1);

for(int i:a)cout<<i<<" ";



return 0;
}
