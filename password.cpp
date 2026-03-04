#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        bool flag=false;
        if(s.length()==1){
            char next = (s[0] == 'z' ? 'a' : s[0] + 1);
            s.insert(1, 1, next);
            flag=true;
        }
        
        else {for(int i=0;i<s.length()-1;i++){
            if(s[i]==s[i+1]){
                char next = (s[i] == 'z' ? 'a' : s[i] + 1);
                s.insert(i+1, 1, next);
                flag=1;
                break;
            }
           
        }}
        if(flag==0){
            char next = (s[0] == 'z' ? 'a' : s[0] + 1);
                s.insert(0, 1, next);
        }
        cout<<s<<endl;
    }
    
}
