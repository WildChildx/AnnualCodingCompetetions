#include <iostream>
#include <vector>

using namespace std;

int main(){
    float r1,r2,s1,s2,t,d,pi =3.14159;
    cin>>r1>>r2>>s1>>s2>>t>>d;
    //time arrays
    vector<int>E,F;
    //if number of shared points is 1 return time taken
    if(r1+r2==d){
        cout<<(2*pi*r1)/s1<<" "<<"E&F";
    }else{
        //time to reach E
        if(s1>0){
            float eTime = (2*pi*r1)/s1;
            while(eTime>=s1){
                E.push_back(eTime);
                eTime  = eTime + eTime;
            }
        }
    }

    return 0;
}
