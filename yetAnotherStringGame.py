t=int(input())
for _ in range(t):
    s=input()
    res=''
    for i in range(len(s)):
        if i%2==0:
            if s[i]=='a':
                res+='b'
            else:
                res+='a'
        if i%2!=0:
            if s[i]=='z':
                res+='y'
            else:
                res+='z'
    print(res)
