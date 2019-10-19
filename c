#! /usr/bin/python3
# Ce programme crée une simple calculatrice qui peut calculer la somme, la différence, le produit et le quotient en utilisant les fo$
# Cette fonction ajoute deux nombres 
def add(x, y):
   return x + y
# Cette fonction soustrait un nombre d'un autre 
def subtract(x, y):
   return x - y
# Cette fonction multiplie deux nombres
def multiply(x, y):
   return x * y
# Cette fonction divise deux nombres
def divide(x, y):
   return x / y
print("Choisir l'opération.")
print("1.Addition")
print("2.Soustraction")
print("3.Multiplication")
print("4.Division")
# Demander a l'utilisateur de faire ses choix d'opération et de nombres 
choice = input("Choisissez l'opération(1/2/3/4):")
num1 = int(input("Choisissez le premier nombre: "))
num2 = int(input("Choisissez le deuxième nombre: "))
if choice == '1':
   print(num1,"+",num2,"=", add(num1,num2))
elif choice == '2':
   print(num1,"-",num2,"=", subtract(num1,num2))
elif choice == '3':
   print(num1,"*",num2,"=", multiply(num1,num2))
elif choice == '4':
   print(num1,"/",num2,"=", divide(num1,num2))
else:
   print("Invalid input")
