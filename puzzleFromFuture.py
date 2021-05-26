t=int(input())
for _ in range(t):
    n=int(input())
    b=input()
    res='1'
    s=str(int(res[0])+int(b[0]))
    for i in range(1,len(b)):
        if s[i-1]=='0':
            if b[i]=='0':
                res+='1'
            elif b[i]=='1':
                res+='1'
        elif s[i-1]=='1':
            if b[i]=='0':
                res+='0'
            elif b[i]=='1':
                res+='1'
        elif s[i-1]=='2':
            if b[i]=='0':
                res+='1'
            elif b[i]=='1':
                res+='0'
        s+=str(int(res[i])+int(b[i]))
    print(res)
