txt = IO.readlines("testfile.txt")
count = 0
txt.each {|x|
	if /xiaohua/.match(x)
		puts(count)
	end
	count = count + 1
}