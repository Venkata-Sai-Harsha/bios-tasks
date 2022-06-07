n=input("Enter images:").split()
png=0
jpeg=0
bmp=0
for i in n:
  if '.png' in i:
    png=png+1
  elif '.jpeg' in i:
    jpeg=jpeg+1
  elif '.bmp' in i:
    bmp=bmp+1
  else:
    print("error")
    exit()
print(png,jpeg,bmp)
