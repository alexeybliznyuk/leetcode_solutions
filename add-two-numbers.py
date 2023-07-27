# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
#class Solution:
#    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:


#https://leetcode.com/problems/add-two-numbers/

#l1 = [2,4,3]
#l2 = [5,6,4]
l1 = [9,9,9,9,9,9,9]
l2 = [9,9,9,9]

def addTwoNumbers(l1, l2):
#    multiplier = 1 * (10**(len(l1)-1))
    multiplier = 1
    result_num1 = 0
    for i in range(len(l1)):
        result_num1 = result_num1 + l1[i] * multiplier
        multiplier = multiplier * 10

    multiplier = 1
    result_num2 = 0
    for i in range(len(l2)):
        result_num2 = result_num2 + l2[i] * multiplier
        multiplier = multiplier * 10

            #807
    final_result = str(result_num1 + result_num2)
    final_len = []
    i = len(final_result) - 1
    while i != -1:
        final_len.append(int(final_result[i]))


        i = i - 1

    return final_len
        
#    print(result_num1)
#    print(result_num2)
#    print(final_result)
        


print(addTwoNumbers(l1, l2))

