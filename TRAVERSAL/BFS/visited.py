# Visited set: what, why, how

# Why needed: prevents revisiting the same state/node → avoids infinite loops + extra work.

# When to mark: mark as visited at enqueue time (when you push to queue). This guarantees each node enters the queue once.

# What type:

# Graph with IDs (0..n-1): use visited = [False]*n.

# Generic nodes / grid coordinates / strings: use a set → visited = set().

# Hashability: sets require hashable items → use tuples for coordinates: (r, c).

print("Starting of the code for the visiting brother !!! ")

visitedElement = set()

# now add the element 


# use the                   .add(insert)           method in the case of set to add the element !!! 
visitedElement.add(488)
visitedElement.add(210)
visitedElement.add(11)
visitedElement.add(21312)
visitedElement.add(22)
visitedElement.add(323)
visitedElement.add(3)
visitedElement.add(3)
print(visitedElement)
# check the element 3 is present in the visited element or not tell me 

if 3 not in visitedElement:
    print("Element not found brother !!!1 ")
else:
    print("element found ")



print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n")

# 1 -- 2 -- 3
# |         |
# 4 --------5


  # now making the graph for this brother 


graph = {
    1: [2,4],
    2: [3,4],
    3: [2,5],
    4: [1,5],
    5:[3,4]

}

# simple loop to print all the elements

visitedSet = set()

start = 1 
def dfs(node):
    if node in visitedSet:
        return 
    else:
        visitedSet.add(node)
        print("visiting the node ", node)

        # important condition brother !!! 
        
        for nei in graph[node]:
            dfs(nei)

dfs(start)