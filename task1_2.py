#Представление массива данных

spisok_palindromov = ["ЗАКАЗ, ЗАМАЗ, ЗУЗ, И ЧИ, И, ИААИ, ИАИ, ИБИ, ИВИ, ИДИ-ИДИ"]

#Стек

stack = []
spisok_palindromov1 = ["ЗАКАЗ, ЗАМАЗ, ЗУЗ, И ЧИ, И, ИААИ, ИАИ, ИБИ"]
spisok_palindromov2 = ["ЗАКАЗ, ЗАМАЗ, ЗУЗ, И ЧИ, И, ИААИ, ИВИ, ИДИ-ИДИ"]
spisok_palindromov3= ["ЗАКАЗ, ЗАМАЗ, ЗУЗ, И ЧИ, И, ИБИ, ИВИ, ИДИ-ИДИ"]
stack.append(spisok_palindromov1)
stack.append(spisok_palindromov2)
stack.append(spisok_palindromov3)
print(stack)