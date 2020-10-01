class Solution:
    def numSubarrayProductLessThanK(self, nums, k):
# nums = [10, 5, 2, 6]
# k = 100


        start,end,s = 0,0,1
        ans = 0
        
        if(k <= 1):
            return 0


        while(end<len(nums)):
            # print(start,end)

            s *= nums[end]
            # print(s)

            # if(s < k):
            # 	ans += 1

            while(s >= k):
                s /= nums[start]
                start += 1

            # else:
            # 	s /= nums[start]
            # 	start += 1
            # 	if(s < k):
            # 		ans += 1
            ans += end - start + 1

            end += 1

        return(ans)