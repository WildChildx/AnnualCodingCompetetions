#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long dieCount;
        cin>>dieCount;
        vector<int>dieList(dieCount);
        for(int i=0;i<dieCount;i++){
            cin>>dieList[i];
        }

        sort(dieList.begin(),dieList.end());
        for(int j=0;j<dieCount;j++){
            if(j+1>dieList[j]){
                dieList.erase (dieList.begin() + j);
                dieCount--;
                j=0;
            }
        }
        
        for(auto x:dieList){
            cout<<x<<" ";
        }

        cout<<endl;

        cout<<"Case #"<<i+1<<": "<<dieList.size()<<endl;
    }
    return 0;   
}