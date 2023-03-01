hr = int(input("Digite a Hora: "))
min = int(input("digite os Minutos: "))
seg = int(input("digite os Segundos: "))
hr = hr * 3600
min = min * 60
total = hr+min+seg
print("Valor em segundos é: ",total)