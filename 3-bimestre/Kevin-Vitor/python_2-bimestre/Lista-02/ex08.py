import math

circulo = 5
raio = []
area = []

for i in range(1, circulo + 1):
    valor = float(input(f"Digite o raio do {i}º círculo: "))
    raio.append(valor)

for i in range(5):
    area.append(raio[i] ** 2 * math.pi)

for i in range(5):
    print(f"A área do {i + 1}º círculo é: {area[i]}")