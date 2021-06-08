#include<bits/stdc++.h>
using namespace std;


set<int> Union;
set<int> Intersection;

void findUnion(int arr1[],int arr2[],int n,int m){
    int i = 0;
    int j = 0;
    while(i < n && j < m){
        if(arr1[i]>arr2[j]){
            Union.insert(arr2[j]);
            j++;
        }
        else if(arr1[i] < arr2[j]){
            Union.insert(arr1[i]);
                i++;
        }
  
        else {
            Union.insert(arr1[i]);
            i++;
            j++;
        }
    }
    while (i < n)
        Union.insert(arr1[i++]);
     while (j < m)
        Union.insert(arr2[j++]);
}
void findIntersection(int arr1[],int arr2[],int n,int m){
    int i = 0;
    int j = 0;
    while(i < n && j < m){
        if(arr1[i]<arr2[j])i++;
        else if(arr1[i]>arr2[j])j++;
        else{
            Intersection.insert(arr1[i]);
            i++;
            j++;
        }
    }
}
int main(){

    int n,m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    for(int i = 0; i < n;i++)cin>>arr1[i];
    for(int i =0;i<m;i++) cin>>arr2[i];

    findUnion(arr1,arr2,n,m);
    cout<<"Union: ";
    for(int element:Union)cout<<element<<" ";

    cout<<"\n";
    
    cout<<"Intersection: ";
    findIntersection(arr1,arr2,n,m);
    for(int element: Intersection)cout<<element<<" ";

    cout<<"\n";
}