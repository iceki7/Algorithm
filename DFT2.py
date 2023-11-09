# -*- coding: utf-8 -*-
"""
Created on Wed Nov  8 22:33:07 2023

@author: 34915
"""

import numpy as np
import time
import math
import matplotlib.pyplot as plt


sigstart=0
siglen=10
signum=50 #sample num


freqmin=1/siglen

np.random.seed(1234)

freqnum=signum
x=np.linspace(sigstart,sigstart+siglen,signum+1)
numx=np.linspace(0,freqnum-1,freqnum)
#freqx=np.linspace(0,(freqnum-1)/siglen,freqnum)

#信号函数
def sig(x):
    #X=x*2*np.pi/siglen
    y=50*np.sin(5*x)+0.1*(10*x)**2+0.01*np.exp(0.001*x)*np.cos(x)+\
        0#5*np.random.uniform(-15, 15, x.shape)*np.random.randint(0, 2, x.shape)
    #y=np.sin(X)
    #y=np.sin(X)+np.cos(2*X)
    #y=np.sin(x*2*np.pi/siglen)
    return y


#频率强度。freq表示它是基频的多少倍。
def amp(freq,bsin=0):#frequency-amplitude    freq是波数
    a=0
    if(freq==0):
        a=sum(sig(x))
        return [a,a]
    
    s=sum(np.sin(x*2*np.pi*freq/siglen)*sig(x))
    c=sum(np.cos(x*2*np.pi*freq/siglen)*sig(x))

    return [s,c]
asin=[]
acos=[]
for j in range(0,freqnum):
    amplitude=amp(j)
    asin.append(amplitude[0])
    acos.append(amplitude[1])
    

#重建信号
def sigr(x,cutfreq=1000,threshold=0):#threshold=800
    sig=0
    for j in range(1,freqnum):
        if(abs(asin[j])>=threshold):
            sig+=asin[j]*np.sin(2*np.pi*j*x/siglen)
        if(abs(acos[j])>=threshold):   
            sig+=acos[j]*np.cos(2*np.pi*j*x/siglen)
        if(j==cutfreq):
            break
    return sig

asin=[round(x, 5) for x in asin]
acos=[round(x, 5) for x in acos]


def draw(x,y,label,hold=False):
    plt.plot(x,y,label=label)
    plt.grid()
    plt.legend()
    if(hold==0):
        plt.show()


draw(numx,asin,"sin",hold=True)
draw(numx,acos,"cos")
draw(x,(sigr(x=x)+20000)/30,"recover")
draw(x,sig(x),"original")

xx=np.linspace(sigstart,sigstart+siglen,signum*3)







def test(m,n):#高频采样测试。为一个频率为m的函数执行n采样
    z=np.linspace(0,n,n+1)
    zz=np.sin(z*2*np.pi*m/n)
    zz=[round(i, 7) for i in zz]
    plt.plot(z,zz)
# test(48,99)

