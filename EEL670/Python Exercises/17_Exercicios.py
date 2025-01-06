# Loja de tintas
# Pedir o tamanho em metros quadrados da area a ser pintada
# cobertura de tinta é : 1 litro para cada 6 metros quadrados
# a tinta é vendida em latas de 18 litros, que custam 80R$
# ou em galões de 3,6 litros que custam R$ 25
# informar ao usuário a quantidade de tinta a ser comprada 
# e os respectivos preços em 3 situações
# comprar apenas latas de 18 litros
# comprar apenas galões de 3,6 litros
# misturar latas e galões, de forma que o desperdício seja menor
# acrescente 10% de folga e sempre arredonde os valores para cima
# isto é, considere latas cheias

print("__Programa de tintas__")

# recebe o tamanho a ser pintado
tam = float(input("Qual o tamanho da área a ser pintada em m² ? : "))

# quantidade de litros necessária
litros = (tam/6)
# quantidade de galoes necessarios
galoesdetinta = litros/3.6
# quantidade de latas necessarias
latasdetinta = litros/18
# valor final para latas
valorfinal = latasdetinta * 80
#valor final para galoes
valorfinal2 = galoesdetinta * 25

print("QUANTIDADES POSSIVEIS: ")
print("Comprando galoes de tinta de 3.6 litros : ", round(galoesdetinta,None),"Galões. E o valor total será : R$",round(valorfinal2,None))
print("Comprando galoes de tinta de 18 litros : ", round(latasdetinta,None),"Latas. E o valor total será : R$",round(valorfinal,None))

media = (galoesdetinta + latasdetinta) / 2
valormedia = (80 + 25)/2
valorfinal3 = media * valormedia
folga = 1.1
valorfinal3 = valorfinal3 * folga

print("Comprando latas e galoes de tinta de 18 e 3.6 litros:", round(media,None),"Latas e galões. E o valor total será: R$",round(valorfinal3,None)) 
# tinta vendida em 18 litros, custa R$80
# tinta vendida em 3,6 litros, custa R$25





    


