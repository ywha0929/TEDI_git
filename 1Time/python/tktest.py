from tkinter import *

def process():
	if mode.get() == 1:
		temperature = entry.get()
		result = int(temperature)*9/5+32
		label['text'] = str(result)+" F"
	elif mode.get() == 2:
		temperature = entry.get()
		result = (int(temperature)-32)*5/9
		label['text'] = str(result)+" C"
	else:
		label['text'] = "select a mode"

root=Tk()
btn=Button(root,text="convert",font=("Arial", 25),command=process)
label = Label(root,text="result",font=("Arial", 25))
entry= Entry(root,font=("Arial", 25))

mode = IntVar()
radioButton1 = Radiobutton(root,text="Celcius",font=("Arial", 16),value=1, variable=mode)
radioButton2 = Radiobutton(root,text="Farenheit",font=("Arial", 16),value=2, variable=mode)

entry.grid(row=0,column=0,columnspan=2)
label.grid(row=1,column=0,columnspan=2)
radioButton1.grid(row=2,column=0)
radioButton2.grid(row=3,column=0)
btn.grid(row=2,column=1,rowspan=2)
root.mainloop()