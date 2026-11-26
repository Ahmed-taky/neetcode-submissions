class MinStack {
public:
stack<int>sk;
    MinStack() {
        
    }
    
    void push(int val) {
        sk.push(val);
    }
    
    void pop() {
        sk.pop();
    }
    
    int top() {
        return sk.top();
    }
    
    int getMin() {
        stack<int>m ; 
        int mini = sk.top();
        while(sk.size()){
            mini = min(mini , sk.top());
            m.push(sk.top());
            sk.pop();
        }

        while(m.size()){
            sk.push(m.top());
            m.pop();
        }
        return mini ;
    }
};
