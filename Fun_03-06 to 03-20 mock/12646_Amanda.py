'''
OnlineJudge
12646 - Zero or One
Code by: Amanda Lim
'''

while True:
    try:
        input_ = input()
        a,b,c = input_.split(' ')
        if ((a == b) and (a == c)):
            print('*')
        if ((a != b) and (b == c)):
            print('A')
        if ((b != a) and (a == c)):
            print('B')
        if ((c != a) and (a == b)):
            print('C')
    except EOFError:
        break