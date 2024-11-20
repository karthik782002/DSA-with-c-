#include<iostream>
using namespace std;
int ss(int a[],int n){
    int min;
    for( int i=0; i<n ; i++){
        min=i;
        for( int j=i+1 ;j<n ;j++){
            if(a[min]>a[j])
            swap(a[min],a[j]);

        }
        return min;
    }
}
int main(){
    int a[10],n;
    cout<<"enter the size of the array";
    cin>>n;
    cout<<"enter the elements of the array";
    for( int i=0; i<n ; i++){
        cin>>a[i];
    }
   int minn=ss(a,n);
   cout<<minn;


}