#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    unordered_map<string,int> map;
    map["abc"]=1;
    map["abc0"]=2;
    map["abc1"]=3;
    map["abc2"]=4;
    map["abc3"]=5;
    map["abc4"]=6;

    unordered_map<string,int>::iterator it = map.begin();
    while (it != map.end())
    {
        cout<<"key : "<<it->first<<"value : "<<it->second<<endl;
        it++;
    }

    //find an key in the map
    //find function will return an iterator pointing to that specific key.
    //hance create ans iterator for receiving the iterator returned from find.
    unordered_map<string,int>::iterator it1=map.find("abc3");
    //we can access the element using that iterator.
    cout<<"key : "<<it1->first<<"value : "<<it1->second<<endl;

    //erase function also work to erase perticular range of elements.
    map.erase(it1,map.end());
    //this will erase the elements from it1 to end.

    //ITERATORS IN VECTOR
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);

    //iterator
    vector<int>::iterator it2=v.begin();
    while(it2 != v.end())
    {
        cout<< *it2 << endl;
        it2++;
    }

    //there is no find function in vector,
    //there is erase function .
    v.erase(v.begin(), v.end());
    //OR
    v.erase(it2,v.end());
    
    return 0;
}
