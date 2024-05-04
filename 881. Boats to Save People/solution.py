from typing import List

class Solution:
    def numRescueBoats(self, people: List[int], limit: int) -> int:
        people.sort()
        left , right = 0, len(people) - 1
        boats = 0

        while(left <= right):
            
            if(people[left] + people[right] <= limit):
                left+=1
                right-=1
            
            else:
                right-=1

            boats += 1

        return boats

# Time complexity: O(nlogn) 
# Space complexity: O(1)

#example use

people = [3,2,2,1]
limit = 3
solution = Solution()
print(solution.numRescueBoats(people, limit)) # 3