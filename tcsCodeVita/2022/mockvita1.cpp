#include <bits/stdc++.h>
#include<iostream>
#include<math.h>
# define PI 3.141592653589793

using namespace std;

int main(){
    long double ct,y,x,theta,E,m,n,F;
    long double ans=0,ans1=0;
    double r1,r2,s1,s2,t,d;
    long double E1[60]={0};
    long double E2[60]={0};
    long double F1[60]={0};
    long double F2[60]={0};
    cin>>r1>>r2>>s1>>s2>>t>>d;
    
    
    if(r1+r2 == d || abs(r1-r2)==d){
        ct = (2*PI*r1)/abs(s1);
        cout<<int(ct)<<" "<<"E&F";
        ans=-1;
        ans1=-1;
    }
    else{
        x = ( d-((( r1*r1 )-( r2*r2 )) / d )) / 2;
        theta = acos(x/r2);
        E = 2*r2*theta;
        m = 2*PI*r2 - E;
        for(int i=0; i<60; i++){
            n = (i+1)*((2*PI*r1)/abs(s1));
            if(n>60){
                break;
            }
            E1[i] = int(n);
        }
        if(s2>0)
            n = (E/abs(s2));
        else
            n = (m/abs(s2));
        for(int i=0;i<60; i++){
            
            if(n>60){
                break;
            }
            E2[i] = int(n);
            n = n + ((2*PI*r2)/abs(s2));
        }

        for(int i=0;i<60;i++){
            n = (i+1)*((2*PI*r2)/abs(s2));
            if(n>60){
                break;
            }
            F1[i] = int(n);
        }
        if(s1>0)
            n = (E/abs(s1));
        else
            n = (m/abs(s1));
        for(int i=0;i<60; i++){
            
            if(n>60){
                break;
            }
            F2[i] = int(n);
            n = n + (2*PI*r1)/abs(s1);
        }

        for (int i=0;i<60;i++){
            for(int j=0;j<60;j++){
                if(E1[i]==E2[j] && E1[i]!=0){
                    ans=int(E1[i]);
                    break;
                }
                if(E1[i]==0){
                    break;
                }
            }
        }

        if(ans==0){
            for (int i=0;i<60;i++){
                for(int j=0;j<60;j++){
                    if(F1[i]==F2[j] && F1[i]!=0){
                        ans1=int(F1[i]);
                        break;
                    }
                    if(F1[i]==0){
                        break;
                    }
                }
            } 
        }
    }

    if(ans>0)
        cout<<ans<<" "<<"E";
    else if(ans1>0)
        cout<<ans1<<" "<<"F";
    else if(ans==0 & ans==0)
        cout<<"no crash";
    return 0;
}
