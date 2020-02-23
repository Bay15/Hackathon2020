import tkinter as tk

def display (window):
   event = tk.Label(window, text="Would you like to add an event?")
   event.grid(column=1,row=0)
   yes_button = tk.Button(window, text="Yes", bg="orange",fg="red", command=lambda: yes_click())
   yes_button.grid(column = 0, row = 2)
   no_button = tk.Button(window, text="No", bg="orange",fg="red", command=lambda: no_click())
   no_button.grid(column = 2, row = 2)
   
   def yes_click():
       event.destroy()
       yes_button.destroy()
       no_button.destroy()
       label1 = tk.Label(window, text="Name")
       label1.grid(column=0,row=0)
       entry1 = tk.Entry(window,width=10) 
       entry1.grid(column =1,row=0)
       
       label2 = tk.Label(window, text="Time")
       label2.grid(column=0,row=1)
       entry2 = tk.Entry(window,width=10) 
       entry2.grid(column =1,row=1)
       global var1, var2     
       var1 = str(entry1.get())
       var2 = int(entry2.get())
       return var2
       button1 = tk.Button(window, text="Enter", bg="orange",fg="red", command=lambda: clicked())
       button1.grid(column = 0, row = 2)
       def clicked():
           
           print(var1,var2)
           label1.destroy()
           entry1.destroy()
           button1.destroy()
           

   def no_click():
       print("Sounds good!")

