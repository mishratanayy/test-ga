# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -std=c++17

# Targets
TARGET = user-project
# Source files
SRCS = main.cxx user.cxx

# Object files
OBJS = $(SRCS:.cxx=.o)

# Default rule
all: $(TARGET)

# Link object files to create the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile source files to object files
%.o: %.cxx
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up the project
clean:
	rm -f $(TARGET) $(OBJS)

run: 
	./$(TARGET)

# pass command line argument to $Target 
runargs: 
	./$(TARGET) "$(id)" "$(user)" "$(email)"

# Phony targets
.PHONY: all clean