from tkinter import *
before=0
after=0
mode=0
result=0
operationMode = 0
def process1():
	if mode == 0:
		global before
		before = before*10
		before = before + 1
		label['text']=before
	else:
		global after
		after = after*10
		after = after + 1
		label['text']=after
def process2():
	if mode == 0:
		global before
		before = before*10
		before = before + 2
		label['text']=before
	else:
		global after
		after = after*10
		after = after + 2
		label['text']=after
def process3():
	if mode == 0:
		global before
		before = before*10
		before = before + 3
		label['text']=before
	else:
		global after
		after = after*10
		after = after + 3
		label['text']=after
def process4():
	if mode == 0:
		global before
		before = before*10
		before = before + 4
		label['text']=before
	else:
		global after
		after = after*10
		after = after + 4
		label['text']=after
def process5():
	if mode == 0:
		global before
		before = before*10
		before = before + 5
		label['text']=before
	else:
		global after
		after = after*10
		after = after + 5
		label['text']=after
def process6():
	if mode == 0:
		global before
		before = before*10
		before = before + 6
		label['text']=before
	else:
		global after
		after = after*10
		after = after + 6
		label['text']=after
def process7():
	if mode == 0:
		global before
		before = before*10
		before = before + 7
		label['text']=before
	else:
		global after
		after = after*10
		after = after + 7
		label['text']=after
def process8():
	if mode == 0:
		global before
		before = before*10
		before = before + 8
		label['text']=before
	else:
		global after
		after = after*10
		after = after + 8
		label['text']=after
def process9():
	if mode == 0:
		global before
		before = before*10
		before = before + 9
		label['text']=before
	else:
		global after
		after = after*10
		after = after + 9
		label['text']=after
def process0():
	if mode == 0:
		global before
		before = before*10
		label['text']=before
	else:
		global after
		after = after*10
		label['text']=after
def process():
	label['text']=label['text']+ '2'
def processMul():
	global mode
	global before
	global after
	global operationMode
	if mode ==0:
		mode = 1
		operationMode = 1
		label['text']='*'
	elif mode == 1:
		result = calculate()
		before = result
		after = 0
		operationMode = 1
		mode = 1
		label['text'] = '*'

def processEqual():
	global operationMode
	if operationMode == 1:
		result = before * after
		mode = 0
		label['text'] = result

def processCancel():
	global mode
	global before
	global after
	global operationMode
	mode = 0
	before = 0
	after = 0
	operationMode = 0
	label['text'] = ''


def calculate():
	global operationMode
	global before
	global after
	if operationMode == 1:
		return before * after

root=Tk()


label=Label(text="", width=16, height=2, fg="red")
btn1=Button(root,text="1",command=process1)
btn2=Button(root,text="2",command=process2)
btn3=Button(root,text="3",command=process3)
btnTimes=Button(root,text="*",command=processMul)

btn4=Button(root,text="4",command=process4)
btn5=Button(root,text="5",command=process5)
btn6=Button(root,text="6",command=process6)
btnSum=Button(root,text="+",command=process)

btn7=Button(root,text="7",command=process7)
btn8=Button(root,text="8",command=process8)
btn9=Button(root,text="9",command=process9)
btnMinus=Button(root,text="-",command=process)

btn0=Button(root,text="0",command=process0)
btnCancel=Button(root,text="C",command=processCancel)
btnEquals=Button(root,text="=",command=processEqual)
btnDivide=Button(root,text="/",command=process)

label.grid(row=0,column=0, columnspan=4)

btn1.grid(row=1,column=0)
btn2.grid(row=1,column=1)
btn3.grid(row=1,column=2)
btnTimes.grid(row=1,column=3)

btn4.grid(row=2,column=0)
btn5.grid(row=2,column=1)
btn6.grid(row=2,column=2)
btnSum.grid(row=2,column=3)

btn7.grid(row=3,column=0)
btn8.grid(row=3,column=1)
btn9.grid(row=3,column=2)
btnMinus.grid(row=3,column=3)

btn0.grid(row=4,column=0)
btnCancel.grid(row=4,column=1)
btnEquals.grid(row=4,column=2)
btnDivide.grid(row=4,column=3)



root.mainloop()
