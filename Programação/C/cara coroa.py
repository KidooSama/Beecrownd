n = int(input(''))
m = 0
j = 0
while n != 0:
    for i in range (n):
        moeda = int(input(''))
        if moeda == 1:
            m+= 1
        else:
            j += 1

print("Mary won {} times and John won {} times" .format(m, j))