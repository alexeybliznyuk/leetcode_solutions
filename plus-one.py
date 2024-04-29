#https://leetcode.com/problems/plus-one/
#works for leetcode, but slow




class Solution:
    def plusOne(self, digits) -> int:
        result = []
        first_num = 0
        final_num = 0
        squares = len(digits) - 1
        for i in range(len(digits)):
            first_num+= digits[i] * (10**squares)
            squares-=1
#            print(squares)
#            print(first_num)
        final_num = first_num + 1
#        print(final_num)
#        j = 0
#        while 10**j < final_num:
#            j+=1

 #           print(10**j)
#        num_len = j - 1
        
#        print(num_len) 
        str_f_num = str(final_num)
        print(len(str_f_num))
        for i in range(len(str_f_num)):
            result.append(int(str_f_num[i]))

#        print(result)
#        pass
        return result



#digs = [1,2,3]\
#digs = [9]


#test = Solution()
#print(test.plusOne())

#test.plusOne(digs)\

#print(test.plusOne(digs))


