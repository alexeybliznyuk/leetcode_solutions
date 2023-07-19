# https://leetcode.com/problems/maximize-the-confusion-of-an-exam/
# check rows in one key without checking how to maximise rows 
key = "FFFFFTTTFF"
TorF = "T"
temp = 0





def check_for_rows(key, TorF,temp, pos):
    i = pos
    while i != len(key) and key[i] != TorF:
        print(key[i])
        i = i + 1
    temp = 0
    while i != len(key) and key[i] == TorF:
        print(key[i])
        i = i + 1 
        temp = temp + 1 
    print(temp)
    return temp, i

result = check_for_rows(key, TorF, temp, pos=0)
while result[0] != 0:

    result = check_for_rows(key, TorF, temp, result[1])
