integer = int(25)
floating = float(45.69)
Complex = complex(5j)
string = str("String")
List = [23,56,23.4,"list",5j,'L']
Tuple = (45,156.34,"tuple",'T',9j) #tuple
Range = range(5,10)
Dict = {
    "Name":"Rabiul",
    "Branch":"CST",
    "Age":20
}
Set = {45,674,34.56,"Set","T"}
print(type(integer),integer)
print(type(floating),floating)
print(type(Complex),Complex)
print(type(List),List)
print(type(Tuple),Tuple)
for i in Range:    #uses for loop for print range 5 to 10
    print(i)
print(type(Dict),Dict) #print type and tuple items
print(type())
