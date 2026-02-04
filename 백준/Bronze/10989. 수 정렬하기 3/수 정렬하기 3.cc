#include <iostream>
using namespace std;

int arr[10001];

int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int n;
    cin>>n;
    int a;
    for(int i=0; i<n; i++){
        cin>>a;
        arr[a]++;
    }
    for(int i=0; i<10001; i++){
        while(arr[i]--){
            cout<<i<<"\n";
        }
    }
}