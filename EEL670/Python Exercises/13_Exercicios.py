Height = float(input("Type your height: "))
gender = input('Are you a (0)woman or a (1)man ?: ')
if gender == '1':
    Ideal_weight_Men = (72.7*Height) -58
    print(Ideal_weight_Men)
elif gender == '0':
    Ideal_weight_Women = (62.1*Height) -44.7
    print(Ideal_weight_Women)
