input_int = int(input('Type your num'))
#input_int = 921 #for quick debug




def IndianToRoman(input_int):
    temp_num = input_int
    output_roman = ''

    while temp_num > 0:
#        print("in while")
        if temp_num >= 1000:
            output_roman = output_roman + "M"
            temp_num = temp_num - 1000
        elif temp_num >= 900:
            output_roman = output_roman + "CM"
            temp_num = temp_num - 900
        elif temp_num >= 500:
            output_roman = output_roman + "D"
            temp_num = temp_num - 500
        elif temp_num >= 400:
            output_roman = output_roman + "CD"
            temp_num = temp_num - 400
        elif temp_num >= 100:
            output_roman = output_roman + "C"
            temp_num = temp_num - 100
        elif temp_num >= 90:
            output_roman = output_roman + "XC"
            temp_num = temp_num - 90
        elif temp_num >= 50:
            output_roman = output_roman + "L"
            temp_num = temp_num - 50
        elif temp_num >= 40:
            output_roman = output_roman + "XL"
            temp_num = temp_num - 40
        elif temp_num >= 10:
            output_roman = output_roman + "X"
            temp_num = temp_num - 10
        elif temp_num >= 9:
            output_roman = output_roman + "IX"
            temp_num = temp_num - 9
        elif temp_num >= 5:
            output_roman = output_roman + "V"
            temp_num = temp_num - 5
        elif temp_num >= 4:
            output_roman = output_roman + "IV"
            temp_num = temp_num - 4    
        elif temp_num >= 1:
            output_roman = output_roman + "I"
            temp_num = temp_num - 1
        print(temp_num)
    return output_roman


print("before")
print(IndianToRoman(input_int))
print("after")
            
        



'''
I = 1
V = 5
X             10
L             50
C             100
D             500
M             1000
https://leetcode.com/problems/roman-to-integer/
'''
