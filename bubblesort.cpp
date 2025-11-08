#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i -1; j++){
            if(arr[j] >= arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){

    int arr[] = {2,5,1,7,0};
    bubblesort(arr,5);
    for(int i: arr) cout<<i<<" ";
    cout<<endl;
    return 0;
}