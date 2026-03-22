#include<iostream>
using namespace std; 

int main(){
    int arr[8]= {3,6,1,9,76,4,23,55};
   int largest = arr[0];
   int slargest = -1;  


   for ( int i = 0 ; i < 8 ; i++){
    if( arr[i] > largest ) {
        slargest = largest ; 
        largest = arr[i];
    }
    else if ( arr[i] < largest && arr[i] > slargest ) {
        slargest = arr[i];
    }

   } 

   cout << slargest << endl;

   
}