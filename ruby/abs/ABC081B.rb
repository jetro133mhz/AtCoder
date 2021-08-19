n = gets.to_s.to_i
a = gets.to_s.split.map { |e| e.to_i }

result = 0
#ループ終了判定用フラグ
flag = false

while 1
  (0..n - 1).each { |i|
    #偶数があれば終了判定をtrueとして終了
    if a[i] % 2 != 0
      flag = true
      break
    else
      a[i] = a[i] / 2
    end
  }
  if flag
    break
  end
  result += 1
end

puts result
