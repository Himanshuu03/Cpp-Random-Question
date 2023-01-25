#include<iostream>
using namespace std;

int main(){
int n,sum =0;
cin>> n;
int arr[n];
    for(int i=0;i<n;i++){
            int in;
            cin>>in;
            arr[i] = in;
            sum = sum +arr[i];
    }
    cout<<sum;
}


