#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    v.push_back(9);

    cout<<"finding 5-->  "<<binary_search(v.begin(),v.end(),5)<<endl;
    cout<<"finding 6-->  "<<binary_search(v.begin(),v.end(),6)<<endl;
    cout<<"lower bound--> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound--> "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    int a = 3;
    int b = 5;
    cout<<" max --> "<<max(a,b);
    cout<<" min --> "<<min(a,b);

    swap(a,b); // swap saare container me bhi lag sakte h
    cout<<endl<<"a--> "<<a<<endl;

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout<<"string--> "<<abcd<<endl;

    rotate(v.begin(),v.begin()+2,v.end());
    cout<<"after rotate"<<endl;

    for(int i : v)
    {
        cout<<i<<" ";
    }
    sort(v.begin(),v.end());
    // sort function is based on intro sort which is combination of quick sort, heap sort, insertion sort.
    cout<<endl<<endl;
    for(int i : v)
    {
        cout<<i<<" ";
    }

    return 0;
}