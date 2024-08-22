
#include <iostream>
#include <map>
#include <vector>
#include<algorithm>
using namespace std;
int answer(pair<int,int>x ,pair<int,int>y){
    if(x.second==y.second)
        return x.first<y.first;
    return x.second<y.second;
}

int main() {
    int t;
    cin >> t;
    map<int, int> mp;
    int a, b;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        mp[a] = b;  
    }
    int n;
    cin>>n;
     int c, d,e;
    for (int i = 0; i <n; i++) {
        cin >> c>> d >>e;
         if(mp[c]>=e){
             cout<<"Success"<<endl;
             mp[c]=mp[c]-e;
             mp[d]=mp[d]+e;
         }
         else{
             cout<<"Failure"<<endl;
         }
    }
    cout<<"\n";
    
    vector<pair<int,int>>vec;
    for(auto it:mp){
        vec.push_back({it.first,it.second});
    }
    sort(vec.begin(),vec.end(),answer);
    
    for(auto it:vec){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}

 
