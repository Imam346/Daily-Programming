/*----------------------------------------
    author:  Imam
    created: 01.12.2024 14:28:45
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
set<char> vowel({'A','E','I','O','U'});
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    string s; cin>>s;
    string c="",v="",ng="",y="";
    int cnt1=0;
    for(int i=0;i<s.length();i++){
        if(vowel.count(s[i])) cnt1++;

        if(i<s.length()-1 && s[i]=='N' && s[i+1]=='G'){
            ng+="NG";
            i++;
        }
        else if(s[i]=='Y') y+="Y";
        else if(vowel.count(s[i])) v+=s[i];
        else c+=s[i];
    }

    string ans="";//CVC
    int i=0,j=0,k=0,l=0;
    while(true){
        string tmp="";
        if(!ng.empty() && k<ng.size()){
            tmp +="NG";
            k+=2;
            if(!v.empty() && j<v.size()){
                tmp += v[j];
                j++;
            }
            else if(!y.empty() && l<y.size()){
                tmp += y[l];
                l++;
            }
            else {break;}
            if(k<ng.size()){
                tmp+="NG";
                k+=2;
            }
            else if(!c.empty() && i<c.size()){
                tmp += c[i];
                i++;
            }
            else {break;}
        }
        //add syllable
        if(tmp.size()>2){
            ans += tmp;
            continue;
        }
        //consonent
        if(!c.empty() && i<c.size()){
            tmp+=c[i];
            i++;
        }
        else if(!y.empty() && l<y.size()){
            tmp+=y[l];
            l++;
        }
        else {break;}
        //vowel
        if(!v.empty() && j<v.size()){
            tmp += v[j];
            j++;
        }
        else if(!y.empty() && l<y.size()){
            tmp += y[l];
            l++;
        }
        else {break;}
        //consonent
        if(!c.empty() && i<c.size()){
            tmp+=c[i];
            i++;
        }
        else if(!y.empty() && l<y.size()){
            tmp+=y[l];
            l++;
        }
        else {break;}
        //add syllable
        ans += tmp;
    }

    if((2*cnt1)==(s.size()-cnt1))
        cout<<max(s.size(),ans.size())<<'\n';
    else cout<<ans.size()<<'\n';
    return 0;
}