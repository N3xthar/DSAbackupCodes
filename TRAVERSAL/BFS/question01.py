import collections


print("Question 01 ")
graphs = {
    "A" :["B","D","C","E"],
    "B":["A"],
    "D":["C","A"],
    "C":["A"],
    "E":["A","F"],
    "F":["E"]
}

from collections import deque 

# making the function brother !!! 
def bfs(graphs ,start):

    # make a set for the traverse !!! 
    visitedSet = set()
    q  = deque([start])

    while(q):
        node =  q.popleft()
        print("Processing " , node)

        for niegh in graphs[node]:
         
         if niegh not  in visitedSet:
            visitedSet.add(niegh) 
            q.append(niegh)


std  = input("Enter the searching element brother ")
bfs(graphs , std)