from tkinter import *
before = 0
after = 0
inputMode = 0
operationMode = 0

def numProcess(input):
    global before
    global after
    global inputMode
    if inputMode == 0:
        before = before * 10
        before += input
        label['text'] = before
    else: #inputMode == 1
        after = after * 10
        after += input
        label['text'] = after

def operationProcess(input):
    global operationMode
    global inputMode
    global after
    global before
    if inputMode == 1 and input != '=':
        before = calculate()
        after = 0
    else:
        print()

    if input == '*':
        print("this is times")
        operationMode = 1
        inputMode = 1

    elif input == '/':
        operationMode = 2
        inputMode = 1

    elif input == '+':
        operationMode = 3
        inputMode = 1

    elif input == '-':
        operationMode = 4
        inputMode = 1

    elif input == 'C':

        before = 0
        after = 0
        operationMode = 0
        inputMode = 0
        label['text'] = ''
    elif input == '=':
        result = calculate()
        label['text'] = result

def calculate() :
    global operationMode
    global before
    global after
    if operationMode == 1:
        print("calculating times")
        return before * after
    elif operationMode == 2:
        return before / after
    elif operationMode == 3:
        return before + after
    elif operationMode == 4:
        return before - after

def process(input):
    if type(input) == int:
        numProcess(input)
    else:
        operationProcess(input)

root=Tk()
label=Label(root,text="result",font=("Arial", 25))
label.grid(row=0,column=0,columnspan=4)
button_list=["123+","456*","789-","0.=/"]
button_list = list()
button_list.append(Button(root,text=1,width=1,font=("Arial", 25),command=lambda:process(1)))
button_list.append(Button(root,text=2,width=1,font=("Arial", 25),command=lambda:process(2)))
button_list.append(Button(root,text=3,width=1,font=("Arial", 25),command=lambda:process(3)))
button_list.append(Button(root,text="+",width=1,font=("Arial", 25),command=lambda:process("+")))

button_list.append(Button(root,text=4,width=1,font=("Arial", 25),command=lambda:process(4)))
button_list.append(Button(root,text=5,width=1,font=("Arial", 25),command=lambda:process(5)))
button_list.append(Button(root,text=6,width=1,font=("Arial", 25),command=lambda:process(6)))
button_list.append(Button(root,text="*",width=1,font=("Arial", 25),command=lambda:process("*")))

button_list.append(Button(root,text=7,width=1,font=("Arial", 25),command=lambda:process(7)))
button_list.append(Button(root,text=8,width=1,font=("Arial", 25),command=lambda:process(8)))
button_list.append(Button(root,text=9,width=1,font=("Arial", 25),command=lambda:process(9)))
button_list.append(Button(root,text="-",width=1,font=("Arial", 25),command=lambda:process("-")))

button_list.append(Button(root,text=0,width=1,font=("Arial", 25),command=lambda:process(0)))
button_list.append(Button(root,text="C",width=1,font=("Arial", 25),command=lambda:process("C")))
button_list.append(Button(root,text="=",width=1,font=("Arial", 25),command=lambda:process("=")))
button_list.append(Button(root,text="/",width=1,font=("Arial", 25),command=lambda:process("/")))

for i in range(4):
    for j in range(4):
        btn = button_list[(i*4+j)]
        btn.grid(row=i+1,column=j)

root.mainloop()