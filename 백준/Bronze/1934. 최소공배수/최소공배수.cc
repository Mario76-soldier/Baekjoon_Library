#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int n; 
    cin>>n;
    int a,b;
    for(int i=0; i<n; i++){
        int result=1;
        cin>>a>>b;
        int min;
        if(a>b){
            min=b;
        }
        else{
            min=a;
        }
        for(int i=2; i<=min; i++){
            if(a%i==0 && b%i==0){
                result*=i;
                a/=i;
                b/=i;
                if(a>b){
                    min=b;
                }
                else{
                    min=a;
                }
                i=1;
            }
        }
        cout<<result*a*b<<'\n';
    }
}