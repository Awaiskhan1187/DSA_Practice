#include<iostream>
using namespace std;

void selectionsort(int arr[],int size){
    for(int i = 0;i < size;i++){
        int min = i;
        int j = i + 1;
        while(j < size){
            if(arr[j] <= arr[min]){
                min = j;
            }
            j++;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
int main(){
    int arr[] = {3,2,5,8,4,9,0};
    selectionsort(arr,7);
    for(int i: arr) cout<<i<<" ";
    cout<<endl;
    return 0;
}