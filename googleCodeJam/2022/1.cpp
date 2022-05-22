#include <iostream>
using namespace std;
int main(){
    int t = 0;
    cin>>t;
    for(int i=0;i<t;i++){
        int r ,c;
        cin>>r>>c;
        cout<<"Case #"<<i+1<<":"<<endl;

        for(int i =0;i<(2*r)+1;i++){
            for (int j = 0; j < (2*c)+1; j++)
            {
                //position of empty cell
                if ((i==0 && j==0) || (i==0 && j==1) || (i==1 && j==0) || (i==1 && j==1))
                {
                    cout<<".";
                }
                
                if(j>1 && j%2==0 && i%2==0){
                    cout<<"+";
                }else{
                    cout<<"-";
                }

                if(j>1 && j%2==0 && i%2!=0){
                    cout<<"|";
                }else{
                    cout<<"-";
                }
            }

            cout<<endl;
            
        }
        
    }
    return 0;
}