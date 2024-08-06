class Solution:
    ##Complete this function
    #Function to find the sum of contiguous subarray with maximum sum.
    def maxSubArraySum(self,arr):
        ##Your code here
        current = 0
        sofar = float('-inf')
        
        for i in arr:
            current += i
            if current > sofar:
                sofar = current
            if current < 0:
                current = 0

        return sofar
