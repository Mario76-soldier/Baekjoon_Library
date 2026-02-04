#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> vec;
    int first=666;
    while(vec.size()<=10000){
        string title=to_string(first);
        for(int i=0; i<title.size()-2; i++){
            if(title[i]=='6' && title[i+1]=='6' && title[i+2]=='6'){
                vec.push_back(first);
                break;
            }
        }
        first++;
    }
    cout<<vec[n-1];
}