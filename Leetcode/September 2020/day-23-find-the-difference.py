class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        
        from collections import Counter
        
        # c1 = Counter(s)
        
        c2 = Counter(t)
        
        
        for charac in s:
            
            c2[charac] -= 1
        
        for key in c2:
            if(c2[key] > 0):
                return key
            
#             if(key in c1 and c1[key] != c2[key]):
#                 return key
            
#             elif(key not in c1):
#                 return key
    