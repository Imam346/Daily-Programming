import sys
t = int(input())
for _ in range(t):
    n = int(input())
    ar = list(map(int,input().split()))
    
    ans = ar[-1]-ar[0]
    for i in range(1,n):
        ans = max(ans,ar[i]-ar[0])
    for i in range(n-1):
        ans = max(ans,ar[-1]-ar[i])
    for i in range(n-1):
        ans = max(ans,ar[i]-ar[i+1])
    print(ans)