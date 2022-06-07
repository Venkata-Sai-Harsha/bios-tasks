a,b=input().split()
count=0
add=0
for i in a:
  count=count+int(ord(i))
for j in b:
  add=add+int(ord(j))
if add==count:
  print("True")
else:
  print("False")
