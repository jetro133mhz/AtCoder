import sys

input = sys.stdin.readline

def main():
  # 例：整数の入力
  n = int(input())

  # 例：リストの入力
  a = list(map(int, input().split()))

  # 処理を書く
  print(sum(a))

if __name__ == "__main__":
  main()
