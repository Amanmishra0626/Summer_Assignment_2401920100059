class MyQueue {
private:
    stack<int>input;
    stack<int>output;
    void transfer(){
        if(output.empty()){
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        }
    }    
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        transfer();
        int popped=output.top();
        output.pop();
        return popped;
    }
    
    int peek() {
        transfer();
        return output.top();
    }
    
    bool empty() {
        if(input.empty()&&output.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};
