import sys

input = sys.stdin.readline

def main():
  a = int(input())
  b = list(map(int, input().split()))
  c = str(input())

  print(a + sum(b),' ' + c)

if __name__ == "__main__":
  main()
