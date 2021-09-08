cc = g++
out = ta.out 
inc = $(shell find ./ -name "*.h")
src = $(shell find ./ -name "*.cpp")
obj = $(src:%.cpp=%.o) 
	 
$(out): $(obj)
	$(cc) -o $(out) $(obj)
	     
%.o: %.cpp $(inc)
	$(cc) -c $< -o $@

.PHONY: clean
clean:
	rm -rf $(obj) $(out)
