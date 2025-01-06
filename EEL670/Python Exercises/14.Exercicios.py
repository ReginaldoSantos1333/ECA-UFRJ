# Se maior que 50 kilos, deve pagar 4 reais pra cada kilo excedente
#Variavel peso de peixe, que calcula o excesso
#Variavel que diz a quantidade de kilos excedente
#Variavel multa , o valor da multa q ue deverá pagar 

print("____PROGRAMA QUE CALCULA KILAGEM DE PEIXES____")

peso_do_peixe = int(input("Digite quantos kilos de peixe possui : \n"))
limite = 50
excesso = peso_do_peixe - limite
multa = excesso * 4 

if peso_do_peixe > limite:
    print("Sua quantidade excedeu o limite : \n")
    for i in range(excesso + 1):
        i =+ 1
    print("\nO excesso foi de ", excesso)
    print("\nA multa a ser paga é do valor (4 reais por kilo excedente) : R$", multa)
