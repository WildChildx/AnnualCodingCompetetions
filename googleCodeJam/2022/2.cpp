#include<iostream>
#include<vector>
#include<algorithm>
#include <cmath>

using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        vector<int>c(4),m(4),y(4),k(4);
        for (int j = 0; j < 5; j++){
            cin>>c[j];
        }
         for (int j = 0; j < 5; j++){
            cin>>m[j];
        }
         for (int j = 0; j < 5; j++){
            cin>>y[j];
        }
        for (int j = 0; j < 5; j++){
            cin>>k[j];
        }

        int cMin = *min_element(c.begin(),c.end()),mMin = *min_element(m.begin(),m.end()),yMin = *min_element(y.begin(),y.end()),kMin = *min_element(k.begin(),k.end());
        vector<int>ans{cMin,mMin,yMin,kMin};
        int offset = abs((cMin+mMin+yMin+kMin) - pow(10,6));
        if(offset==0){
             cout<<"Case #"<<i+1<<": "<<cMin<<" "<<mMin<<" "<<yMin<<" "<<kMin<<endl;
        }else if(offset<pow(10,6)){
            cout<<"IMPOSSIBLE"<<endl;
        }else{
            
            for(int x:ans){
            if(x>offset){
                x = x - offset;
            }
        }

       cout<<"Case #"<<i+1<<":";
       for(int x:ans){
           cout<<x<<" ";
       }

       cout<<endl;
     }


    }
    
    return 0;
}