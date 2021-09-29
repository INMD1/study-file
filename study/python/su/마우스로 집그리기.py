import turtle

def draw(x , y):
    turtle.goto(x,y)

t = turtle.Turtle()
t.shape("turtle")
t.pensize(10)
s = turtle.Screen()
s.onscreenclick(draw)