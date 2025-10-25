print("Now i am working with the dfs brother !!! ")


def dfs(graph,node,visited=None):
    if visited is None:
        visited = set()

    if node not in visited:
        print("Processing",node)
        visited.add(node)
    
    # now neighbour ke liye  dfs call !!! 
    for neighbour in graph[node]:
        dfs(graph,neighbour,visited)

graphs = {
    "A" :["B","C"],
    "B":["D","E"],
    "D":["F"],
    "C":[],
    "E":[],
    "F":[]
}

# now brother 
dfs(graphs,"A")