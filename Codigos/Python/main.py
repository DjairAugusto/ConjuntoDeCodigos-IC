print("\nEntre com a temperatura para cada dia da semana:\n")

# Inicialização da lista para armazenar as temperaturas
temperaturas = [0] * 7

# Leitura de temperatura de cada dia
for cont in range(7):
    temperaturas[cont] = float(input("\nDia " + str(cont + 1) + ": "))

# Calcular menor e a maior temperatura
menor = temperaturas[0]
maior = temperaturas[0]
for temp in temperaturas:
    if temp < menor:
        menor = temp
    if temp > maior:
        maior = temp

# Calcular a temperatura média
soma = sum(temperaturas)
media = soma / 7

# Separando temperaturas menores e maiores que a média
abaixo_media = 0
acima_media = 0
for temp in temperaturas:
    if temp < media:
        abaixo_media += 1
    elif temp > media:
        acima_media += 1

# Mostrar resultados
print("\nMenor temperatura: " + str(menor) + "ºC")
print("\nMaior temperatura: " + str(maior) + "ºC")
print("\nTemperatura média: " + str(media) + "ºC")
print("\nTemperaturas abaixo da média: " + str(abaixo_media) + " dias")
print("\nTemperaturas acima da média: " + str(acima_media) + " dias")
