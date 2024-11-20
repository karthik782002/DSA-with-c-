#include<iostream>
using namespace std;
int count(int arr[],int n){
    int zerocount=0;
    int onecount=0;
    for(int i = 0 ; i<n ;i++){
        if(arr[i]==0){
            zerocount++;

        }
        else
        {
            onecount++;
        }
    }
    for(int i=0;i<zerocount;i++){
        arr[i]=0;
    }
     for(int i=zerocount;i<n;i++){
        arr[i]=1;
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i];
    }
}
int uniqueElement(int arr[],int n){
    int ans=0;
for(int i =0 ;i<n;i++){
  ans=ans^arr[i];
}
return ans;
}
int countSec(int arr[],int n){
    for(int i =0 ;i<n ; i++){
        if (arr[i]==0){
            cout<< arr[i];
        }
    }
    for(int i = n-1 ; i>0 ; i--){
        if(arr[i]==1){
            cout<< arr[i];
        } 
    }
    return 0;
    
}

int main(){
    int arr[100];
    int n;
    cout<<"enter the size of the elements";
    cin>>n;
    cout<<"enter the elements in the array";
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    countSec(arr,n);
    return 0;
    
    // count(arr,n);
//     int answ=uniqueElement(arr,n);
//    cout << answ;
}