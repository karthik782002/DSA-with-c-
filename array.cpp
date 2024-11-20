#include <iostream>
using namespace std;
int reverse(int arr[],int n){
    for (int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}
int main()
{
    int arr[]={10,20,30,40,50};
    int n=5;
    reverse(arr,n);
}