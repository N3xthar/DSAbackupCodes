print("Now its time  for the bfs brother !!!! ")

from collections import deque

graphs = {
    "A" :["B","D","C","E"],
    "B":["A"],
    "D":["C","A"],
    "C":["A"],
    "E":["A","F"],
    "F":["E"]
}

def bfs(graphs,start):
    # now you have to make the visited set for the traversal brother !!!!1 
    visitedSet = set()
    # making the queue for implement the bfs 
     

    q = deque([start]) 
    # now add in the visited set 
    visitedSet.add(start)

    # now its time for the real questions 

    while(len(q)>0):
        node  = q.popleft()
        print("Processing ",node)

        # now its time for the neighbour  travel 
        
        for neigh in graphs[node]:
            if neigh not in visitedSet:
                visitedSet.add(neigh)               # mark that neigh element visited brother !!! 

                q.append(neigh)          # add from the back 



start  = input("Enter the element you want to search brother ")
bfs(graphs,start)