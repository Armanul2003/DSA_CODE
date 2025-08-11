#include<iostream>
using namespace std;
void insertionsort(int arr[],int n){
    int temp;
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
        }
        else{
            break; }
    }
}
}
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionsort(arr, n);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";}
    return 0;
}