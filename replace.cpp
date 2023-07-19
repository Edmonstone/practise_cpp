#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int>& v){
    for(int i = 0 ; i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    cout << "v :";
    print(v);
    replace(v.begin(),v.end(),3,6);
    cout << "After replacing : ";
    print(v);
    return 0;
}