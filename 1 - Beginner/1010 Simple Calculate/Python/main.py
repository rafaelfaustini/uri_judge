cod1, quant1, price1 = input("").split()
cod2, quant2, price2 = input("").split()
total = int(quant1)*float(price1)
total += int(quant2)*float(price2)
print("VALOR A PAGAR: R$ "+str(round(total,2)))


