#https://leetcode.com/problems/two-sum/
#i have no idea how to manage this code to leetcode's formay, but istg i will find it out . btw now it pass unit tests from examples 




#nums = [3,2,4]
#nums = [2,7,11,15]
nums = [3,3]
#target = 6
#target = 9
target = 6
result = [-1, -1]
i = 0
l = 0

while i < len(nums):
    while l < len(nums):
        if l == i and l < len(nums):
            l+=1
            if l >= len(nums):
                break
        if (nums[l] + nums[i]) == target:
            print(f'{nums[i]} and {nums[l]} equal target ({target})')
            if result == [-1, -1]:
                result[0] = i
                result[1] = l
            
        l+=1
#    print(nums[i])
    l=0
    i+=1


print(result)

