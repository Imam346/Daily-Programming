def solve():
    n,x = map(int,input().split())
    ar = list(map(int,input().split()))
    ar.sort()
    ans,sum = 0,0
    for i in range(n):
        sum+=ar[i]
        if sum>x: break
        ans +=1 # for the current shop
        ans += (x-sum)//(i+1)
    print(ans)

t = int(input())
for _ in range(t): solve()