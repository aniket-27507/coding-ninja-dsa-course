#include <unordered_map>
#include <iostream>
using namespace std;
void printIntersection(int input1[], int input2[], int size1, int size2)
{
    unordered_map<int, int> ans;
    for(int i = 0; i < size1; i++)
    {
        ans[input1[i]]++;
    }

    for(int i = 0; i < size2; i++)
    {
        if(ans[input2[i]]>0)
        {
            cout<<input2[i]<<" "<<endl;
            ans[input2[i]]--;//reduce its occurence by 1.
            
        }
    }


}
#include <iostream>
using namespace std;



int main() {
    int n;
    cin >> n;

    int* arr1 = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr1[i];
    }

    int m;
    cin >> m;

    int* arr2 = new int[m];

    for (int i = 0; i < m; ++i) {
        cin >> arr2[i];
    }

    printIntersection(arr1, arr2, n, m);

    delete[] arr1;
    delete[] arr2;
}/*
sample input
3
7 7 7
4
7 7 7 7

output
7
7
7



*/