#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b){
    return a+b>b+a;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> vec;
    for(int i=0; i<numbers.size(); i++){
        vec.push_back(to_string(numbers[i]));
    }
    sort(vec.begin(), vec.end(), compare);
    if(vec[0]=="0"){
        return "0";
    }
    
    for(int i=0; i<vec.size(); i++){
        answer+=vec[i];
    }
    return answer;
}