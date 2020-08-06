#include <iostream>
#include <numeric>
#include <string>
using namespace std;

bool cst1(string s){
    if(s.length()>8)    return true;
    return false;
}
bool cst2(string s){
    int ctg[4]={0};
    int len = s.length();
    for(int i=0;i<len;i++){
        char tmp = s[i];
        if(tmp<='Z'&&tmp>='A')  ctg[0] = 1;
        else if(tmp<='z'&&tmp>='a')  ctg[1] = 1;
        else if(tmp<='9'&&tmp>='0')  ctg[2] = 1;
        else ctg[3] = 1;
        if(accumulate(ctg,ctg+4,0)==3)  return true;
    }
    return false;
}
bool cst3(string s){
    int len = s.length();
    for(int slen=3;slen<len;slen++){
        
        for(int i=0;i<)
    }
    string target = s.substr(0,3);
    string reminding = s.substr(3);
    cout<<reminding.find(target)<<endl;
    if(reminding.find(target)!=0)    return true;
    return false;
}
int main(){
    string s;
    while(cin>>s){
        cout<<cst3(s)<<endl;
    }
}