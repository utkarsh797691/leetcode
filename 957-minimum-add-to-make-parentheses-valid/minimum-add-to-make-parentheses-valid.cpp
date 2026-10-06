class Solution {
public:
    int minAddToMakeValid(string s) {
     stack<char>st;
     for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else if(st.size()==0 ){
            st.push(s[i]);
        }
        else if(s[i]==')' && st.top()=='('){
            st.pop();
        }
        else if(s[i]==')' && st.top()==')'){
            st.push(s[i]);
        }
     }  
     return st.size();
    }
};