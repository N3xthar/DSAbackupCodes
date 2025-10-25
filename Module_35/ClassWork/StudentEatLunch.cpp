class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

        // now converting the Student array into the queue !!! 

        queue <int> q ; 

        int n  =  students.size();
        
        for(int  i = 0 ; i < n ; i++){
            
             q.push(students[i]);
            
        }

        int count  = 0 ;  // for avoiding the infinite repetation of the loop !!! 
        int  i = 0 ; 
        while(q.size()>0 && count != q.size()){
            if (q.front()==sandwiches[i]){
                i++;
                q.pop();
                count= 0 ;


            }
            else {
                q.push(q.front());
                q.pop();
                count ++;
            }
        }
        return q.size();

        
    }
};