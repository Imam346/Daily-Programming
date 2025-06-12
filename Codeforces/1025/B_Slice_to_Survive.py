def res(n,m):
    cnt=0
    while(n>1):
        cnt+=1
        n-=n//2
    while(m>1):
        cnt+=1
        m-=m//2
    return cnt

def solve():
    n,m,a,b = map(int,input().split())
    ans=float('inf')
    ans = min(ans,res(n,b))     # remove right split
    ans = min(ans,res(n,m-b+1)) # remove left split
    ans = min(ans,res(a,m))     # remove down split
    ans = min(ans,res(n-a+1,m)) # remove up split
    ans+=1 # First turn is given manually, so increment by 1

    print(ans)
     
t = int(input())
while t:
    solve()
    t-=1