#include <iostream>
using namespace std;


int main(){
    int arr[5]={4,2,8,1,5};
    int n=5;
    for(int i=0; i<n-1; i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}


