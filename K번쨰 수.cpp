#include <string>
#include <vector>
#include<algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
     for(int i=0;i<commands.size();i++){
        int start = commands[i][0];
        int end = commands[i][1];
        int index = commands[i][2];
        vector<int> v;
        v.resize(end-start+1);
        copy(array.begin()+start-1,array.begin()+end,v.begin());
        nth_element(v.begin(),v.begin()+index-1,v.end());
        answer.push_back(v[index-1]);
    }

    return answer;
}
