#include <unordered_map>
#include <vector>
#include<iostream>
using namespace std;
vector <int> removeduplicates(int *v,int size)
{
    vector<int> ans;
    unordered_map<int,bool> map;
    for (int i = 0; i < size; i++)
    {
        if(map.count(v[i])>0)
        {
            continue;
        }
        map[v[i]] = true;

        ans.push_back(v[i]);

    }
    return ans;
}

int main() {
	int a[] = {1,2,3,3,2,1,4,3,6,5,5};
	vector<int> output = removeduplicates(a,11);
    cout <<"{";
	for (int i = 0; i < output.size(); i++) {
		cout << output[i]<<", ";
	}
    cout<<"}";

}




