#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={0,0,0,0,0,0,0,0,1,1,1,1,1};

    int n=sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int hi=n-1;
    int target=1;
    int firstIdx=-1;

    while(lo<=hi){
        int mid=lo+(hi-lo)/2;

        if(arr[mid]==target){
           if(mid==0){
            firstIdx=mid;
            break;
           }
        else if(arr[mid-1]!=target){
            firstIdx=mid;
            break;
        }
        else if(arr[mid-1]==target)
           hi=mid-1;
       }
       else if(arr[mid]>target)
             hi=mid-1;
       else if(arr[mid]<target)
           lo=mid+1;
    }
    if(firstIdx==-1)cout<<"no index exists";  
    else 
       cout<<n-firstIdx;
    return 0;
}