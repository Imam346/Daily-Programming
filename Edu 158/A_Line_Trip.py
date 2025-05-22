import sys
from collections import deque
t = int(input())
for _ in range(t):
    n,x = map(int,input().split())
    dq = deque(map(int,input().split()))
    dq.appendleft(0)
    # print(dq)
    mx = -sys.maxsize
    for i in range(0,n):
        tmp = abs(dq[i]-dq[i+1])
        mx = max(mx,tmp)
    
    tmp = (x-dq[n])*2
    mx = max(mx,tmp)
    print(mx)