class Solution:
    def calcEquation(self, equations: List[List[str]], values: List[float], queries: List[List[str]]) -> List[float]:
        
        from collections import defaultdict
        
        graph = defaultdict(dict)
        
        for (i,j),k in zip(equations,values):
            graph[i][j] = k
            
            graph[j][i] = 1.0/k
            
        
        
        ans  = []
        
        def dfs(start,end,visited):
            
            if(start not in graph or end not in graph):
                return -1
            
            if(end in graph[start]):
                return graph[start][end]
            
            
            for i in graph[start]:
                if(i not in visited):
                    visited.add(i)
                    temp = dfs(i,end,visited)
                    
                    if(temp == -1):
                        continue
                    
                    else:
                        return graph[start][i] * temp
            
            return -1
            
        
        for i in queries:
            
            ans.append(dfs(i[0],i[1],set()))
            
        
        return ans
    