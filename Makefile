CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++20

SRC_DIR = source
BUILD_DIR = build

# Find all cpp files
SOURCES = $(wildcard $(SRC_DIR)/*.cpp) \
          $(wildcard $(SRC_DIR)/menus/*.cpp)

# Convert source/foo.cpp -> build/foo.o
OBJECTS = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SOURCES))

TARGET = $(BUILD_DIR)/game

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $@

# Compile source files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR)

run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run
