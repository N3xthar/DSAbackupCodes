    #include <iostream>
    #include <queue>
    #include <vector>
    using namespace std;
    // dynamically          !!!!!




    // making the class for this implementation !!!!!!

    class Newqueue
    {
    public:
        int f;
        int b;
        // for not loading the dynamically array !!!!
        int *array;
        int capacity ; 


        Newqueue(int val)
        {
            // data function
            f = 0;
            b = 0;
            capacity = val;
            array =  new int [capacity] ; 
        }

        

        // calculating the size of the queue !!!!
        int size()
        {
            return b - f;
        }





        // for pushing the code !!!

        void  push(int val)
        {
            if (size() == capacity)
            {
                cout << " Queue is full ";
                return ;
            }
            array[b] = val;
            b++;
           ; 
            
        }

        // to pop a element from the queue !!!
        void pop( )
        {
            if (size() == 0)
            {
                cout << " Queue is empty ";
                return ;
            }
        
        f++;
        }


        // use to view the front element !!!!
        int front()
        {
            if (size() == 0)
            {
                cout << " The queue is empty ";
                return -1;
            }
            return array[f];
        }

        // implementing back () ;
        int back()
        {
            if (size() == 0)
            {
                cout << "Cout queue is empty ";
                return -1;
            }
            return array[b - 1];
        }

        // implement the empty element !!!!

        bool empty()
        {
            if (size() == 0)
            {
                return true;
            }
            else
                return false;
        }

        // data function

        void display()
        {
            for (int i = f; i < b; i++)
            {
                cout << array[i] << " ";
            }
        }

        // making deconstructor for making the free element !!!! 
        ~Newqueue(){
            delete  [] array ; 
        }
    };

    int main()
    {
        Newqueue q(5);
        q.push(10);
        q.display();
        
    }