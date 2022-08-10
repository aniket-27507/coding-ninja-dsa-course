#include<unordered_map>
#include<iostream>
using namespace std;

int highestFrequency(int arr[], int n)
{
    unordered_map<int,int> frequency;

    for (int i = 0; i < n; i++)
    {
        frequency[arr[i]]++;
    }
    
    int key=0;
    int value=0;
    for(int i = 0; i < n; i++)
    {
        if(frequency[arr[i]] > value)
        {
            value=frequency[arr[i]];
            key=arr[i];
        }
    }
    return key;
}
#include <iostream>
using namespace std;



int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << highestFrequency(arr, n);

    delete[] arr;
}
//input
//13
//2 12 2 11 12 2 1 2 2 11 12 2 6

//output 
//2