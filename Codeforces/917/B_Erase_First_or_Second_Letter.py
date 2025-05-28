import sys
input = sys.stdin.readline

t = int(input().strip())
for _ in range(t):
    n=int(input().strip())
    s=input().strip()
    st = set()
    ans,unique=0,0
    for c in s:
        if c not in st: unique+=1
        st.add(c)
        ans+=unique
    print(ans)