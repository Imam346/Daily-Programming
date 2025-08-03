n=int(input())
s=input()
zero=s.count('0')
one=n-zero
print(n-min(zero,one)*2)