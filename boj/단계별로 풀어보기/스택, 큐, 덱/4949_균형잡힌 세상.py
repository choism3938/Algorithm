while True:
    s = input()
    if s == '.':
        break
    li =[]
    flag = True # True : 균형이 맞다. False : 균형이 안맞다. 

    for x in s:
        if x =='(' or x =='[':
            li.append(x)
        elif x == ']':
            if len(li) == 0 or li[-1] != '[':
                flag = False
                break
            li.pop()
        elif x == ')':
            if len(li) == 0 or li[-1] != '(':
                flag = False
                break
            li.pop()
            
    if len(li) != 0:
        flag = False

    if flag == True:
        print('yes')
    else:
        print('no')
