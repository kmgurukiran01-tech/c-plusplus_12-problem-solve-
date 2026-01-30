#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void operate( vector<pair<int, string>> &pairs) {
        //Write your code here...
        long long sum=0;
        string conca="";
        for(auto &p:pairs){
            sum+=p.first;
            conca+=p.second;
        }
        cout << sum<< endl;
        cout << conca << endl;
        cout<<conca.size()<<endl;
    }
};
