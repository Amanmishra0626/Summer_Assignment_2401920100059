class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> digit;
        for(string value:tokens){
            if(value=="+"||value=="-"||value=="*"||value=="/"){
                int b=digit.top();
                digit.pop();
                int a=digit.top();
                digit.pop();
                if(value=="+"){
                    digit.push(a+b);
                }
                else if(value=="-"){
                    digit.push(a-b);
                }
                else if(value=="*"){
                    digit.push(a*b);
                }
                else if(value=="/"){
                    digit.push(a/b);
                }
            }
            else{
                digit.push(stoi(value));
            }
        }
        return digit.top();
    }
};
