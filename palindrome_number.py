#https://leetcode.com/problems/palindrome-number/description/


class Solution:
    def isPalindrome(self, x: int) -> bool:
        ans = -1
        temp_x = str(x)
        i = len(temp_x) - 1
        rev_numb_as_list = []
        rev_numb = ''
        while i >= 0:
            rev_numb_as_list.append(temp_x[i])
            i-=1


        rev_numb = "".join(rev_numb_as_list)


        if temp_x == rev_numb:
            ans = True
        elif temp_x != rev_numb:
            ans = False

        return ans


#for testing
#tester = Solution()
#print(tester.isPalindrome(10))



