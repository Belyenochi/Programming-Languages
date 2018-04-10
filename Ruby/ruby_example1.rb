x = rand(10)
flag = false

3.times do |i|
	guess = Integer(gets.strip)

	if guess == x
		flag = true
		puts "you win"
		break
	elsif guess < x
		puts "the number you guess is smaller"
	else
		puts "the number you guess is bigger"
	end
end

if flag == false
	puts"you are lost"
end