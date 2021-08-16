string = gets.to_s.chomp
result = 0

i = 0
until string[i].nil? do
  if string[i].to_i == 1
    result += 1
  end
  i += 1
end

puts result
