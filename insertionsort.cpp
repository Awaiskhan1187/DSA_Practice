#include<iostream>
using namespace std;

void insertionsort(int arr[],int size){
    for(int i = 1;i< size;i++){
        int j = i - 1;
        int key = arr[i];
        while(j >= 0 && arr[j] >= key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main(){
    int arr[] = {3,2,5,8,4,9,0};
    insertionsort(arr,7);
    for(int i: arr)cout<<i<<" ";
    cout<<endl;
    return 0;
}