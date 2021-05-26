
def fun(A):
    cx=0
    co=0
    us=0
    for i in range(3):
        for j in range(3):
            if A[i][j]=='X':
                cx+=1
            elif A[i][j]=='O':
                co+=1
            elif A[i][j]=='_':
                us+=1
    xwin,owin=False,False
    for i in range(3):
        if A[i].count('X')==3:
            xwin=True
        if A[i].count('O')==3:
            owin=True
    if A[0][0]=='X' and A[1][1]=='X' and A[2][2]=='X':
        xwin=True
    if A[0][0]=='O' and A[1][1]=='O' and A[2][2]=='O':
        owin=True
    if A[0][2]=='X' and A[1][1]=='X' and A[2][0]=='X':
        xwin=True
    if A[0][2]=='O' and A[1][1]=='O' and A[2][0]=='O':
        owin=True
    A = [[A[j][i] for j in range(3)] for i in range(3)]
    for i in range(3):
        if A[i].count('X')==3:
            xwin=True
        if A[i].count('O')==3:
            owin=True
    if A[0][0]=='X' and A[1][1]=='X' and A[2][2]=='X':
        xwin=True
    if A[0][0]=='O' and A[1][1]=='O' and A[2][2]=='O':
        owin=True
    if A[0][2]=='X' and A[1][1]=='X' and A[2][0]=='X':
        xwin=True
    if A[0][2]=='O' and A[1][1]=='O' and A[2][0]=='O':
        owin=True
    if (xwin==True and owin==True) or(cx-co<0) or (cx-co>1):
        print(3)
    elif xwin==True and owin==False and cx>co:
        print(1)
    elif xwin==False and owin==True and cx==co:
        print(1)
    elif cx==0 and co==0 and us==9:
        print(2)
    elif xwin==False and owin==False and us==0:
        print(1)
    elif xwin==False and owin==False and us>0:
        print(2)
    else:
        print(3)
t=int(input())
for _ in range(t):
    A=[]
    for _ in range(3):
        A.append(input())
    fun(A)
