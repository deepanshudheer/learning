class Solution:
    def subArraySum(self,arr, n, s): 
       #Write your code here
        start = 0
        current_sum = arr[0]
        res = []

        for i in range(1, n + 1):
            while current_sum > s and start < i - 1:
                current_sum -= arr[start]
                start += 1

            if current_sum == s:
                res.append(start + 1)
                res.append(i)
                return res

            if i < n:
                current_sum += arr[i]

        return [-1]
