import sys
input = sys.stdin.readline

import numpy as np
t = int(input())
for _ in range(t):
    n = int(input())
    if(n==2):
        print(-1)
        continue
    mat = np.zeros((n,n),dtype=int)
    odd=1
    even=2
    for i in range(n):
        for j in range(n):
            if(odd<=(n*n)):
                mat[i][j]=odd
                odd+=2
            else:
                mat[i][j]=even
                even+=2
    
    # print matrix
    for i in range(n):
        for j in range(n):
            print(mat[i][j], end=" ")
        print()