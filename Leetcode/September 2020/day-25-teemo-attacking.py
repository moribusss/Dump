class Solution:
    def findPoisonedDuration(self, timeSeries: List[int], duration: int) -> int:
        
        if(len(timeSeries) == 0):
            return 0
        
        c = 0
        for index in range(len(timeSeries)-1):
            
            if(timeSeries[index+1] - timeSeries[index] > duration):
                c += duration
            
            else:
                c += timeSeries[index+1] - timeSeries[index]
                
        return c + duration