#include<bits/stdc++.h>
using namespace std;

// largest element in the array
int largest(int arr[], int n){
    int largest = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}

// Second largest element in array
int secondlargest(int arr[], int n){
    int largest = arr[0];
    int slargest = INT_MIN;

    for(int i = 1; i < n; i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > slargest){
            slargest = arr[i];
        }
    }
    return slargest;
}

// Second smallest element in the array (FIXED)
int secondsmallest(int arr[], int n){
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    
    for (int i = 1; i < n; i++){
        if(arr[i] < smallest){         
            ssmallest = smallest;
            smallest = arr[i];          
        }
        else if(arr[i] != smallest && arr[i] < ssmallest){
            ssmallest = arr[i]; 
        }
    }
    return ssmallest;
}

int main(){
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Largest: " << largest(arr, n) << endl;
    cout << "Second Largest: " << secondlargest(arr, n) << endl;
    cout << "Second Smallest: " << secondsmallest(arr, n) << endl;

    return 0;
}