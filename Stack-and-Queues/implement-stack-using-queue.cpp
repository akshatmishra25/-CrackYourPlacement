class MyStack {
private:
    queue<int> first;
    queue<int> second;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        first.push(x);
        while(!second.empty()){
            first.push(second.front());
            second.pop();
        } 
        swap(first, second);       
    }
    
    int pop() {
        if(second.empty()){
            return -1;
        }
        int removed = second.front();
        second.pop();
        return removed;
    }
    
    int top() {
        if(second.empty()){
            return -1;
        }        
        return second.front();
    }
    
    bool empty() {
        return second.empty();       
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */