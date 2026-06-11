#include<bits/stdc++.h>
using namespace std;


int removeduplicate (vector<int> &arr , int n){
    int i =0;
    for (int j=1; j<n; j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
} 
 int main(){
    vector<int> arr = {1,1,2,2,3,3,4,4};
    int n = arr.size();
    int k = removeduplicate(arr , n);
     cout<<"number of unique elements:" << k << endl;
     cout<<"array after removing duplicate:";
     for(int i=0; i<k ; i++){
        cout<<arr[i]<<" ";
     } 
     cout<<endl;
    return 0;   
 }