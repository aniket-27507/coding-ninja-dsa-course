#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    unordered_map<string,int> ourmap;
    
    //insert
    //1st way
    pair <string,int> p("abc",1);
    ourmap.insert(p);

    //2nd way
    ourmap["def"]=2;

    //find or access element 
    //it is similar to the array
    cout<<ourmap["def"]<<endl;
    cout<<ourmap.at("def")<<endl;

    //we cannot access the element which is  not inserted in ourmap using at.
    //cout<<ourmap.at("geh")<<endl;<--this will throw error.
    //but [] will assign default value(0) to the key and print it.
    cout<<ourmap["geh"]<<endl;
    cout<<"size: = "<<ourmap.size()<<endl;

    //check presence.
    //to check presence since the key will return count of 1(if assigned) 
    //and 0 if not assigned we use count to check presence.
    if(ourmap.count("geh")>0)
    cout<<"geh is present"<<endl;
    else
    cout<<"geh is not present"<<endl;

    //erase the value assigned to the key
    ourmap.erase("geh");
    cout<<"size: = "<<ourmap.size()<<endl;
    if(ourmap.count("geh")>0)
    cout<<"geh is present"<<endl;
    else
    cout<<"geh is not present"<<endl;

    //update any key
    ourmap["def"]=3;
    cout<<ourmap["def"]<<endl;
    return 0;
}
