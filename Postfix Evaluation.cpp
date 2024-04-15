#include<bits/stdc++.h>
using namespace std;
int postfix(string s)
{
    int i;
    stack<int>st;
    for(i=0;i<s.size();i++)
    {
        int val1,val2;
        if(isdigit(s[i]))
        {
            st.push(s[i]-'0');
        }
        else
        {
            val1=st.top();
            st.pop();
            val2=st.top();
            st.pop();
            switch(s[i])
            {
            case '+':
            {
                st.push(val2+val1);
                break;
            }
            case '-':
                {
                    st.push(val2-val1);
                    break;
                }
            case '*':
                {
                    st.push(val2*val1);
                    break;
                }
            case '/':
                {
                    st.push(val2/val1);
                    break;
                }
            case '^':
                {
                    st.push(pow(val2,val1));
                    break;
                }
            }
        }
    }
    return st.top();
}
int main()
{
    int result;
    string s;
    cout<<"Enter your postfix string\n";
    getline(cin,s);
    result=postfix(s);
    cout<<"The result is "<<result<<endl;
}
