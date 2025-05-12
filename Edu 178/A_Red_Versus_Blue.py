import sys
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    n,a,b = map(int,input().split())
    part=a//(b+1)
    rem = a%(b+1)
    for i in range(b+1):
        for j in range(part): print("R",end="")
        if(rem):
            print("R",end="")
            rem-=1
        # number of b times print B
        if(i!=b): print("B",end="")
    print()
