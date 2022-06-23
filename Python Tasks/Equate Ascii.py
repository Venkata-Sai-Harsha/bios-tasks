a,b=input().split()
count=0
add=0
for i in a:
  count=count+ord(i)
for j in b:
  add=add+ord(j)
if add==count:
  print("True")
else:
  print("False")
