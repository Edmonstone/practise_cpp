#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v1={10,20,30};
    vector<int>v2={40,50,60};
    vector<int>v3(6);
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());

    for(auto i=v3.begin();i!=v3.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;

    int arr[]={1,2,3,4,5};
    int arr1[]={11,22,33,44,55};
    int arr2[10];
    merge(arr,arr+5,arr1,arr1+5,arr2);
    for(int i=0;i<10;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    string s1[]={"andhra","bihar","chennai","denmark","england"};
    string s2[]={"france","ghuhan","hariyana","italy","jharkhand"};
    string s3[10];
    merge(s1,s1+5,s2,s2+5,s3);
    for(int i=0;i<10;i++){
        cout<<s3[i]<<" ";
    }
    cout<<endl;
    return 0;
}