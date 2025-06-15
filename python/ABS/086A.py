import sys

input = sys.stdin.readline

def main():
  # 例：リストの入力
  a = list(map(int, input().split()))

  # 処理を書く
  if a[0] * a[1] % 2 == 0:
    print('Even')
    sys.exit(0)
  else:
    print('Odd')
    sys.exit(0)

if __name__ == "__main__":
  main()
