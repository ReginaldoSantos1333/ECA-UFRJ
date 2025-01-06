print("__Calculadora de tempo de dowload__")

arquivo = float(input("Digite o tamanho do arquivo (em MB): "))
velocidade = float(input("Qual a velocidade da sua internet (Mbps): "))

mbps = 0.125 # megas em mbps

# velocidade convertido para mb's
velocidadeemmb = velocidade * 0.125
# velocidade do download
veldownload = (arquivo/velocidadeemmb)/60
print("O download estará completo em aproximadamente",round(veldownload,None),"minutos")