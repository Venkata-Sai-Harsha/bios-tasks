n=int(input())
for i in range (n):
  a,b,r=map(int,input().split())
t=input()
l=list(input().split())
count=0
for j in l:
  if a+b>int(j):
    count=count+1
print(count)
if count>r:
  print("Natsu")
else:
  print("Grey")
