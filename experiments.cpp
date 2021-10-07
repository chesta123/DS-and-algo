#include <iostream>
using namespace std;

int main(){
    int t,n,l,k,a[1000];
    cin>>t;
    for(int i=0;i<t;i++){

        cin>>n>>l>>k; 
               
        for(int j=0;j<n;j++){
            cin>>a[j];            
        } 
        
        int max=a[0];
          for(int j=0;j<n;j++){
            if(a[j]>max){
                max=a[j];
            }          
        }
        if (a[n-1]==max)
        {
            cout<<"Yes"<<endl;
        }
        
        else if((a[n-1]+((l-1)*k)) > max)
        {
            cout<<"Yes"<<endl;
        }
        
        else{
            cout<<"No"<<endl;
        }
    }

}