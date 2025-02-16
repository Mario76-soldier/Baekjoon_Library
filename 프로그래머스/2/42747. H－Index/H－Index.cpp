#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b){
    return a>b;
}

int solution(vector<int> citations) {
    int answer = 0;
    vector<int> cit;
    cit=citations;
    sort(cit.begin(), cit.end(), compare);
    for(int i=0; i<cit.size(); i++){
        if(i<cit[i]){
            answer++;
        }
        else{
            break;
        }
    }
    return answer;
}