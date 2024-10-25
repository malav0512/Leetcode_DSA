class Solution(object):
    def maximumTastiness(self, price, k):
         price.sort()
         start, end, result = 0, price[-1] - price[0], 0

         while start <= end:
            mid = (start + end) // 2
            last, count = price[0], 1

            for i in range(1, len(price)):
                if price[i] - last >= mid:
                    count += 1
                    last = price[i]
                    
            if count >= k:
                result = max(mid, result)
                start = mid + 1
            else:
                end = mid - 1
        
         return result
        