import sys
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    n=int(input())
    ar=list(map(int,input().split()))
    odd=0
    for val in ar:
        if(val&1):odd+=1
    if((odd&1)==0): print("YES")
    else: print("NO")