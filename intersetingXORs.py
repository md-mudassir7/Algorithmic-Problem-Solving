import math
def nextPowerOf2(n):
    return pow(2,math.ceil(math.log2(n)))
def previousPowerOf2(n):
    return pow(2,math.floor(math.log2(n)))
def fun(n):
    if pow(2,math.ceil(math.log2(n)))==n:
        print((n-1)*(nextPowerOf2(n+1)-1))
    else:
        m=previousPowerOf2(n)
        res1=(m-1)*(nextPowerOf2(m+1)-1)
        res=res1-((n-m)*(m-1))
        print(res)
t=int(input())
for _ in range(t):
    n=int(input())
    fun(n)
