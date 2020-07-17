#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        // unordered_set<char>st;
        int p[26];
        memset(p,0,sizeof(p));
        for(int i=0;i<s.length();i++)
           {
               int x=s[i]-'a';
               p[x]=1;
           }
        
        
        
        int l2=0;
        for(int i=0;i<26;i++){
            if(p[i])
              l2++;
        }
        
        
        int l1=s.size();
        int j=0;
        int start=0;
        int fr[26];
        
        memset(fr,0,sizeof(fr));
        
        int count=0;
        int out=l1;
        
        while(j<l1){
            int x=s[j]-'a';
            if(p[x]&&fr[x]==0){
               
               count++;
                }
                
                
            fr[x]++; 
            
            if(count==l2){
                
                int k=s[start]-'a';
                while(p[k]==0||fr[k]>1)
                {
                    fr[k]--;
                    start++;
                    k=s[start]-'a';
                }
                int ln=j-start+1;
                out=min(out,ln);
                
            }
              
            j++;
        }
        
        cout<<out<<endl;
    }
    
    
    
}