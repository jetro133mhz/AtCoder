a, b = gets.chomp.split(" ").map(&:to_i)
if (a * b).to_i.even?
  print("Even\n")
else
  print("Odd\n")
end
