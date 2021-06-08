#include<bits/stdc++.h>
using namespace std;

void Rotate(int arr[], int d, int n)
{
 
    rotate(arr, arr + (d % n), arr + n);
     
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
}
int main(){
      int n,d;
      cout<<"enter n and d"<<"\n";
      cin>>n >> d;
      cout<<"Enter the elements\n";
      int arr[n];
      for(int i = 0; i < n; i++)cin>>arr[i];
      cout<<"The rotated array is: ";
      Rotate(arr,d,n);
}