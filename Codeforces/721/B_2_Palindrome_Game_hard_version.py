def solve():
    n = int(input())
    s = input()
    flag=True
    i, j=0,len(s)-1
    while(i<j):
        if(s[i]!=s[j]):
            flag=False
            break
        i+=1
        j-=1

    zero=s.count('0')
    one=len(s)-zero
    if(flag):
        if(zero==1): print("BOB")
        elif(zero&1==0): print("BOB")
        else: print("ALICE")
    else:
        if(n&1 and zero==2 and s[n//2]=='0'): print("DRAW")
        else: print("ALICE")

t = int(input())
for _ in range(t): solve()
