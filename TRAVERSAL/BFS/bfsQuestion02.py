print("Question 02 ")
graphs = {
    "A" :["B","D","C","E"],
    "B":["A"],
    "D":["C","A"],
    "C":["A"],
    "E":["A","F"],
    "F":["E"]
}
from collections import deque 

def bfs (graphs , start , destination ):
    visitedSet = set()
    q  = deque([start])
    visitedSet.add(start)

    while(q):
        node = q.popleft() ;
        if node == destination:
           print("Path exitst bro ")
           return 
        
      

        for neigh  in graphs[node]:
            if neigh not in visitedSet:
                visitedSet.add(neigh)
                q.append(neigh)

    print("no path exist ")


start = input("Enter the elements brother ")
destination = input("Enter the destination point ")
bfs(graphs , start, destination )