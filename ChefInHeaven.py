

t=int(input())
for _ in range(t):
    l=int(input())
    s=input()
    if s.count('1')==l/2:
        print('YES')
    else:
        flag=0
        cnt=0
        for i in range(l):
            if s[i]=='1':
                cnt+=1
                if cnt>=(i+1)/2:
                    flag=1
                    print('YES')
                    break
        if flag==0:
            print('NO')
