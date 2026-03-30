import matplotlib.pyplot as plt

x = []
y = []

with open("/Users/mac/Desktop/hello/c/result.txt", "r") as f:
    for line in f:
        n, t = line.split()
        x.append(int(n))
        y.append(float(t))

plt.plot(x, y)
plt.xlabel("n")
plt.ylabel("Time (sec)")
plt.title("Fibonacci + GCD Time Complexity")

plt.savefig("graph.png")  # 이미지 저장
plt.show()
