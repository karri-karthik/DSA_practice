#Patterns 
#Day-1
n = 5  #Square Pattern
for i in range(n):
    print("*" * n)


# Solution class containing removeDuplicates method
class Solution:
    # Removes duplicates using set and returns count of unique elements
    def removeDuplicates(self, nums):
        # Set to store seen unique elements
        seen = set() 

        # Position to overwrite next unique element
        index = 0

        # Iterate over each number in nums
        for num in nums:
            # If num is not in seen, it is unique
            if num not in seen:
                # Add num to set
                seen.add(num)

                # Overwrite nums[index] with this num
                nums[index] = num

                # Move index forward
                index += 1

        # Return number of unique elements
        return index


# Driver code
nums = [0,0,1,1,1,2,2,3,3,4]
sol = Solution()
k = sol.removeDuplicates(nums)

print("k =", k)
print("Array after removing duplicates:", nums[:k])
    
    