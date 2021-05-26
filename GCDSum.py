import math
def prime(n):
    for i in range(2,math.floor(math.sqrt(n))):
        if n%i==0:
            return False
    return True
def getSum(n):
    strr = str(n)
    list_of_number = list(map(int, strr.strip()))
    return sum(list_of_number)
t=int(input())
for _ in range(t):
    n=int(input())
    res=n
    while True:
        if math.gcd(res,getSum(res))>1:
            break
        res+=1
    print(res)
    
