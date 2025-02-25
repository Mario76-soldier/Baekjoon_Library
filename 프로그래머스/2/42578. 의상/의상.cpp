#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    bool flag1, flag2, flag3, flag4;
    multimap<string, string> m;
    set<string> s;
    for(int i=0; i<clothes.size(); i++){
        m.insert({clothes[i][1], clothes[i][0]});
        s.insert(clothes[i][1]);
    }
    for(auto it=s.begin(); it!=s.end(); it++){
        answer*=(m.count(*it)+1);
    }
    return answer-1;
}