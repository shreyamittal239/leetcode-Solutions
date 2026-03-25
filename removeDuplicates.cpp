#include<iostream>
using namespace std;

int removeDuplicates(int arr[] , int n ){
    int i = 0 ;
    for(int j = 1 ; j<n; j++){
        if( arr[i] != arr [j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}

int main(){
    int arr[7]={1,2,2,3,3,4,4};

    int size = removeDuplicates(arr, 7);

    cout<<size<<endl;

}