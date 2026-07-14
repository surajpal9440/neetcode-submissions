class MinStack {
public:

    stack<int>st;
    stack<int>minSt;

    MinStack() {
       
    }
    
    void push(int val) {
        //koi bhi element aayega to usko dono stack me dalenge but minStack me dalte time conditions check krenge
        st.push(val);
        if( minSt.empty()|| val<=minSt.top()){
            minSt.push(val);
        }
        else{
            minSt.push(minSt.top() ); //ye top ka hi element fir se repeat krenge , dono stck ka size same rahne ke liye
        }
    }
    
    void pop() {
        st.pop();
        minSt.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minSt.top();
    }
};
