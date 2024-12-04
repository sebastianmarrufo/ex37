import matplotlib.pyplot as plt
import numpy as np

data = np.loadtxt('temp.dat')

plt.plot(data[:,0],data[:,0])
plt.plot(data[:,0],data[:,1])
plt.plot(data[:,0],data[:,2])
plt.plot(data[:,0],data[:,3])
plt.xlabel('log(N)')
plt.ylabel('Tree height')
plt.legend(['Optimal','Min height', 'Avg height', 'Max height'])
plt.show()

#print(data)
