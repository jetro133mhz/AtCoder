# ABC081B - Shift only
n = gets.to_s.to_i
a = gets.to_s.split.map { |e| e.to_i }

#奇数フラグ
is_odd = false
#計算回数
result = 0
while true
  (0..n - 1).each { |i|
    #奇数がある場合はフラグを立ててループを抜ける
    if a[i] % 2 != 0
      is_odd = true
      break
    else
      a[i] = a[i] / 2
    end
  }

  #奇数フラグがtrueの場合は終了
  if is_odd
    break
  else
    # 奇数フラグがfalseの場合は計算回数をインクリメントしてループ継続
    result += 1
  end
end

# 結果を出力
puts result
