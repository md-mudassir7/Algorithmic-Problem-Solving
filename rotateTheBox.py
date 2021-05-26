def fun2(l):
    cnt=l.count("#")
    res=['.' for _ in range(len(l))]
    j=len(l)-1
    for i in range(cnt):
        res[j]='#'
        j-=1
    return res
def fun(l):
    prev=0
    j=0
    for i in range(len(l)):
        if j>=len(l):
            break
        if '*' in l[prev:]:
            j=l[prev:].index("*")
        else:
            j=len(l)
        print(prev,j)
        l[prev:j]=fun2(l[prev:j])
        prev=j+1
    return l

def rotateTheBox(m):
    for i in range(len(m)):
        m[i]=fun(m[i])
    res = [[m[j][i] for j in range(len(m))] for i in range(len(m[0]))]
    for i in range(len(res)):
        res[i]=res[i][::-1]
    return res

rotateTheBox([["*","#","*",".",".",".","#",".","*","."]])
