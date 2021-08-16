a = gets.to_i
#スペース区切りの整数入力
b, c = gets.chomp.split(" ").map(&:to_i)
s = gets.chomp

#フォーマット出力
print("#{a + b + c} #{s}\n")
