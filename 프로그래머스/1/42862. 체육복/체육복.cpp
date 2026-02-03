#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    sort(lost.begin(), lost.end());
    int answer = n;
    vector<int> finder;
    for(int i=0; i<lost.size(); i++){
        auto it=find(reserve.begin(), reserve.end(), lost[i]);
        if(it!=reserve.end()){
            reserve.erase(it);
            finder.push_back(i);
        }
    }
    for(int i=finder.size()-1; i>=0; i--){
        lost.erase(lost.begin()+finder[i]);
    }
    for(int i=0; i<lost.size(); i++){
        auto it=find(reserve.begin(), reserve.end(), lost[i]-1);
        if(it!=reserve.end()){
            reserve.erase(it);
            continue;
        }
        it=find(reserve.begin(), reserve.end(), lost[i]+1);
        if(it!=reserve.end()){
            reserve.erase(it);
            continue;
        }
        answer--;
    }
    return answer;
}