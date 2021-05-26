def fun(l,k):
    ir=0
    mg=0
    cnt=0
    iflag=0
    mflag=0
    res=0
    for i in range(len(s)):
        print(ir,mg,iflag,mflag)
        if iflag and mflag:
            if iflag>mflag:
                cnt=l[mflag:iflag].count(':')
            else:
                cnt=l[iflag:mflag].count(':')
            p=k+1-abs(ir-mg)-cnt
            if p>0:
                res+=1
                iflag=0
                mflag=0
            else:
                if ir>mg:
                    mg+=1
                else:
                    ir+=1
            
        else:
            if l[i]=='X':
                ir=0
                mg=0
                iflag=0
                mflag=0
            if l[i]=='I':
                iflag=1
            if l[i]=='M':
                mflag=1
            if iflag==0:
                ir+=1
            if mflag==0:
                mg+=1
                
    print(res)
    
t=int(input())
for _ in range(t):
    temp=list(map(int,input().split()))
    n=temp[0]
    k=temp[1]
    s=input()
    l=list(s)
    fun(l,k)
