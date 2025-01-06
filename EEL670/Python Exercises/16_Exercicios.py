# Loja de tintas
# Pedir o tamanho em metros quadrados da area a ser pintada
# cobertura de tinta é : 1 litro para cada 3 metros quadrados
# a tinta é vendida em latas de 18 litros, que custam 80R$
# informar ao usuário a quantidade de tinta a ser comprada 
# e o praço total 

print("__Programa de tintas__")

# recebe o tamanho a ser pintado
tam = int(input("Qual o tamanho da área a ser pintada em m² ? : "))

# quantidade de litros necessária
litros = tam/3
latasdetinta = litros / 18
valorfinal = latasdetinta * 80
# tinta vendida em 18 litros, custa R$80

if litros > 18:
    print("Seram necessárias: ",round(latasdetinta,None)," latas de tinta.  E o valor total será: R$", round(valorfinal,None))        

else: print("Será necessário 1 lata de tinta, o valor total é de R$ 80")



    


