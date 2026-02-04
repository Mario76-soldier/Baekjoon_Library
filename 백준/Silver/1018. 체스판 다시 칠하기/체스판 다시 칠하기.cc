#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int min=2500;
    vector<string> vec(n);
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }
    int count=0;
    for(int i=0; i<n-7; i++){
        for(int j=0; j<m-7; j++){
            for(int k=0; k<8; k++){
                for(int l=0; l<8; l++){
                    char req;
                    if((k+l)%2==0)
                        req='W';
                    else
                        req='B';
                    if(vec[i+k][j+l]!=req){
                        count++;
                    }
                }
            }
            if(min>count){
                min=count;
            }
            count=0;
            for(int k=0; k<8; k++){
                for(int l=0; l<8; l++){
                    char req;
                    if((k+l)%2==0)
                        req='B';
                    else
                        req='W';
                    if(vec[i+k][j+l]!=req){
                        count++;
                    }
                }
            }
            if(min>count){
                min=count;
            }
            count=0;
        }
    }
    cout<<min;
}