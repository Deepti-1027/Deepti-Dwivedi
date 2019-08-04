#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin>>s;
           // int n=s.length();
    vector<int> arr(26,0);
    for(int i=0;i<s.length();i++)
        {
            arr[s[i]-'a']++;
        }
            int odd=0;
    bool m=true;
            for(int i=0;i<26;i++)
            {
                if(odd>1)
                {   
                    m=false;
                    break;
                   
                }
                if(arr[i]%2==1)
                    odd++;
            }
    if(m)
        cout<<"YES";
    else
        cout<<"NO";
                
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
