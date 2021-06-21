#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(7);
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // vector<int>::iterator it;
    // for(it=v.begin(); it!=v.end();it++){
    //     cout<<*it<<" ";
    // }

    vector<int> v1(3, 0);
    // swap(v,v1);
    // v.swap(v1);
    sort(v.begin(), v.end());
    for(auto element:v){
        cout<<element<<" ";
    }cout<<endl;

    int sum = accumulate(v.begin(), v.end(), 0); //To get the sum of the vector
    cout<<sum<<endl;

    int mx = *max_element(v.begin(), v.end()); //To get Max_element/min_element of the vector
    int mn = *min_element(v.begin(), v.end());  
    cout<<mx<<" "<<mn<<endl;

    partial_sum(v.begin(), v.end(), v.begin());
    for(auto element:v){
        cout<<element<<" ";
    }
    return 0;
}