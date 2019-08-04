





































#include <cmath>
#include <bits/stdc++.h> 
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<cstring>
using namespace std;


int main()
{  
    int i=0;
    int count=0;
    string s;
    getline(cin,s);
    int l=s.length();
    stringstream ss;
    //string word;

    
    string w;
    getline(cin,w);
    int l1=w.length();
    for(i=0;i<l;i++){
    if(s[i]>=97&&s[i]<=127)
    {
    s[i]=s[i]-32;
    }
}
        
    ss<<s;
    
    for(i=0;i<l1;i++){
    if(w[i]>=97&&w[i]<=127)
    {
    w[i]=w[i]-32;
    }
}
    
    string word;
    while(ss>>word)
    {
        if(word==w)
            count++;
    }
    cout<<count;


    return 0;
}

