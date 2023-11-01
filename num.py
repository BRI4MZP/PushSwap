from random import randint

lista = set()
for i in range(100):
	lista.add(randint(-300, 300))
print(*lista)