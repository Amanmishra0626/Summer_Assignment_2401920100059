class MinStack {
    private:
    stack<int>original;
    stack<int>mini;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        original.push(value);
        if(mini.empty()||value<=mini.top()){
            mini.push(value);
        }
    }
    
    void pop() {
        if(original.top()==mini.top()){
            mini.pop();
        }
        original.pop();
    }
    
    int top() {
        return original.top();   
    }
    
    int getMin() {
        return mini.top();
    }
};
