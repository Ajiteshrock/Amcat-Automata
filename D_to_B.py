n = int(input())
binval = ""
while n>0:
    r = n % 2
    binval = binval+str(r)
    n = n // 2 #for integer qutiont

print(binval[::-1])
