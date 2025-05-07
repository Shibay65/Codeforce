#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
int c=0;
cin>>s;
getline(cin, s);
set<char>nameset;
for(int i=0;i<s.size();i++){
    nameset.insert(s[i]);
}

if(nameset.size() %2==0)
cout<<"CHAT WITH HER!"<<endl;
else
cout<<"IGNORE HIM!"<<endl;
 return 0;
}