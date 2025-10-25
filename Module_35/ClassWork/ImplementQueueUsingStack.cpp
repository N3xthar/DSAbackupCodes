#include <stack>


class MyQueue {
public:
stack <int> st ; 
stack <int> helper  ; 
// solving this using the pop effiecient !!! 


    MyQueue() {
        
    }
    
    void push(int x) {

        if (st.size()==0) {
            st.push(x);
            return  ; 

        }
        else {
            while(st.size()>0){
                helper.push(st.top());
                st.pop();

            }

            // now push the element  
            st.push(x);

            // now put the element of the helper stack into the stack brother !!! 

            while(helper.size()>0){
                st.push(helper.top());
                helper.pop();


            }
        }

        
    }
    
    int pop() {

         // now remove  first element of the 
         int x  = st.top();
         st.pop();
         return x; 

        
    }
    
    int peek() {
        // sirf first element dekho dont remove the element from the stack !!! 
        int x = st.top();
        return x ;
        
    }
    
    bool empty() {
        if (st.size()==0) return true ;
        else return false ; 

        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */