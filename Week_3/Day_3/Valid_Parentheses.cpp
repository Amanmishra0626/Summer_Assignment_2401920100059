class Solution {
public:
    bool isValid(string s) {
        stack<char> input;
        for(char ch:s){
            if(ch=='('){
                input.push(')');
            }
            else if(ch=='['){
                input.push(']');
            }
            else if(ch=='{'){
                input.push('}');
            }
            else{
                if(input.empty()||input.top()!=ch){
                    return false;
                }
                input.pop();
            }
        }
        
            if(input.empty()){
                return true;
            }
            else{
                return false;
            }
    }
};
