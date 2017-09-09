import sys

try:
    try:
        NUO, IKI = [int(x) for x in open(sys.argv[1]).read()]
    except FileNotFoundError:
        print("Tokio failo nėra")
        sys.exit()
except IndexError:
    NUO, IKI = [int(x) for x in input().split()]
    
didz = 0
didzsk = NUO
for x in range(NUO, IKI+1):
    y = 2
    dal = 0
    while y**2 < x:
        if x%y == 0:
            dal += 1
        y += 1
    if dal > didz:
        didz = dal
        x = didzsk
        
try:
    open(sys.argv[1], 'w').write(didzsk)
except IndexError:
    print(didzsk)
