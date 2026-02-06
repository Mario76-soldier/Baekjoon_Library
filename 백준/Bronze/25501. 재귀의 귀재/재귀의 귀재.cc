#include <iostream>
#include <cstring>
using namespace std;

int counter=0;

int palin(const char *s, int first, int last){
    counter++;
    if(first>=last){
        return 1;
    }
    if(s[first]!=s[last]){
        return 0;
    }
    return palin(s, first+1, last-1);
}

int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int n;
    cin>>n;
    char s[1001];
    for(int i=0; i<n; i++){
        cin>>s;
        cout<<palin(s, 0, strlen(s)-1)<<' '<<counter<<'\n';
        counter=0;
    }
}