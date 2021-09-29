import builtins
from tkinter import *

window  = Tk()
window.title("계산기")
window.geometry("350x200")
Label(window, text= "반지름").grid(column= 0, row=0)
res_label = Label(window, text= "결과")
res_label.grid(column= 1, row = 0)
def circumference():
    res_text = "결과=" +str(float(num1.get())*2*3.14)
    res_label.configure(text= res_text)
def shape():
    res_text = "결과=" +str(float(num1.get())*float(num1.get())*3.14)
    res_label.configure(text= res_text)
btn_plus = Button(window,text="+", command= circumference)
btn_mult = Button(window, text= "*", command= shape)
btn_plus.grid(column=2,row=1)
btn_mult.grid(column=2,row=1)
window.mainloop()