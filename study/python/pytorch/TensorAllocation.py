from typing import Match
import torch

# 1차원 배열
ts = torch.FloatTensor([0., 1., 2., 3., 4., 5., 6.])
print(ts)

print(ts.dim())
print(ts.shape)
print(ts.size())

print(ts[0], ts[1], ts[-1]) 
print(ts[2:5], ts[4:-1]) 
print(ts[:2], ts[3:])    

#2차원 배열
t = torch.FloatTensor([[1., 2., 3.],
                       [4., 5., 6.],
                       [7., 8., 9.],
                       [10., 11., 12.]
                      ])
print(t)

print(t.dim())
print(t.shape)
print(t.size())

print(t[:,:-1])