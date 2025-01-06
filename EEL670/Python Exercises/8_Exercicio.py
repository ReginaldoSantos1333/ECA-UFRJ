#Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.
import math

salary = 0

perhour = float(input("Quanto ganha por hora?:  "))
perday = float(input("Horas trabalhadas por mês?: "))


salary = perday * perhour

print(f'Seu salário será R${salary:,.3f}')




