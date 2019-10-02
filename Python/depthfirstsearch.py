graph = {
    'A' : ['D'],
    'B' : ['C','D'],
    'C' : ['B'],
    'D' : ['A','B']
}

def dfs(graph, node, visited):
    if node not in visited:
        visited.append(node)
        for n in graph[node]:
            dfs(graph, n, visited)
    return visited

visited = dfs(graph,'A', [])
print(visited)