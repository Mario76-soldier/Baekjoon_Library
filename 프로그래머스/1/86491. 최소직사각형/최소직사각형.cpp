#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int w=0,h=0;
    for(int i=0; i<sizes.size(); i++){
        w=max(w, min(sizes[i][1], sizes[i][0]));
        h=max(h, max(sizes[i][1], sizes[i][0]));
    }
    return w*h;
}