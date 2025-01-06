
#Programa que pergunte quanto se ganha por hora 
# numero de horas trabalhadas no mês
# calcula e mostra o total do salário no mês 
# sabendo que são descontados 11% para Imposto de renda
# 8% para o INSS
# 5% para o sindicato 

# Salário bruto
# quanto pagou ao INSS
# quando pagou ao sindicato
# salario líquido 
# calcule os descontos e o salário líquido segundo a tabela
# a baixo 

print("__Programa que calcula horas trabalhadas__")

# Quanto se recebe por hora
reaisph = int(input("Insira quanto recebe por hora : "))
# Quantas horas trabalha no mês
horaspm = int(input("Digite a quantidade de horas trabalhadas no mês : "))
# Salário bruto
s_bruto = reaisph * horaspm
# Descontos 
irpf = s_bruto * 0.11
inss = s_bruto * 0.08
sindicato = s_bruto * 0.05
#Salário líquido
s_liquido = s_bruto - irpf - inss - sindicato


print("-----VALOR FINAL-----")
print("\nSalário bruto é : R$",s_bruto)
print("IR(11%) : R$",irpf)
print("INSS(8%) : R$",inss)
print("Sindicato(5%) : R$",sindicato)
print("Salário Líquido : R$",s_liquido)