class Solution:
    def largestNumber(self, arr):
        
        from functools import cmp_to_key
        
        for i in range(len(arr)):
	        arr[i] = str(arr[i])

        
        sort_funct = lambda a, b: -1 if a+b > b+a else 0
        
        arr.sort(key=cmp_to_key(sort_funct))
        
        return(str(int(''.join(arr))))
        
    