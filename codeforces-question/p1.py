from re import T
import sys

input = sys.stdin.readline


def inp():
	return (int(input()))


def inlt():
	return (list(map(int, input().split())))


def insr():
	s = input()
	return (list(s.strip()))


def invr():
	return (map(int, input().split()))

for _ in range(inp()):
    n=inp()
    arr=inlt()
    ans=[arr[0]]
    check=False
    for i in range(1,n):
        val=ans[-1]+arr[i]
        if(arr[i]>0 and (ans[-1]-arr[i])>=0):
            check=True
            break
        ans.append(val)
    if(check):
        print(-1)
    else:
        for i in ans:
            print(i,end=" ")
        print()