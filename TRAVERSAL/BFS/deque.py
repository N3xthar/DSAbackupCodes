# 🔥 Step 1: What is a Queue?

# A Queue is a FIFO (First In First Out) data structure.

# Think of it like people standing in a line at a ticket counter:

# First person to enter the line will be served first.



# using the dqueue as a list 

# list 

queue = []

# inserting the element 
queue.append(10)
queue.append(290)
queue.append(1232)
queue.append(878)
queue.append(832)

# now printing of the queue 

print("This the queue as a list without using the library bro !!!  ",queue)





# USING THE QUEUE AS FORM THE DATA MEMBER 


from collections import deque 

# create a sample deque !!! 

q  = deque() 

# adding the element in deque 

print("\n")
q.append(200)
q.append(10)
q.append(290)
q.append(1232)
q.append(878)
q.append(832)
print("deque form the inbuilt functions ",q)



# now removing the deque element from front brother !!!

q.popleft()
print("after first character remove ",q)
q.popleft()
print("after first character remove ",q)



# removing the element from top 
q.pop()
print("removal of element from back ",q)


# now watch the front element 
print(q[0])


# now search the  element is empty in the deque or not tell me broooo

if not q:
    print("Element not present !! ")
else :
    print("Element exist !!! ")



p =  deque();
if not p:
    print("The deque is empty brother ")
else:
    print("the elements are ",p)


# using the deue is beneficital because the time coplexity for getting the element is O(1)








# Step 5: Queue using queue.Queue (Thread-Safe)

# used fot he safty purpose !!!! 


from queue import Queue 

q = Queue()

# adding the elements !!!!
q.put(10)
q.put(499)
q.put(3000)

print("size of  element is :)",q.qsize())





