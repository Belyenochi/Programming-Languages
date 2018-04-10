def hash_to_array(hash={})
	arr = []
	hash.each_value do |v|
		arr << v
	end
	return arr
end

hashDemo = {"A"=>"a", "B"=>"b", "C"=>"c"}

puts("#{hash_to_array(hashDemo)}")

# array = ['A', 'a', 'B', 'b', 'C', 'c']
# hash = Hash[*array]
# => {"A"=>"a", "B"=>"b", "C"=>"c"}

# hash_table = {a: 1, b: 2, c: 3}
# hash_table.each {|k, v| puts(k, v)}

# There is an array containing 16 Chinese characters. Only use the each method
# to print the contents of the array and print 4 numbers at a time. Then redo 
# the enumeration module's each_slice method
array = [0, 1, 2, 3, 4, 5]
array.each do |item|
	puts("loop count:#{item}")
  4.times do |i|
  	num = array.pop()
  	if num
  		puts("#{num}")
  	end
  end
end

puts("=========================")
# Equivalent to

array2 = [0, 1, 2, 3, 4, 5]

array2.each_slice(4) { |item| puts("loop count: #{item}") }