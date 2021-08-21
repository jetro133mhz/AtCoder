#B - How many?
s, t = gets.chomp.split(" ").map { |e| e.to_i }

result = 0

(0..s).each { |a|
  (0..s).each { |b|
    (0..s).each { |c|
      if a + b + c <= s && a * b * c <= t
        result += 1
      end
    }
  }
}

puts result