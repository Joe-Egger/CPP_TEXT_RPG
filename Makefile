CXX = g++
CXXFLAGS = -Wall -Wextra -Iinclude $(shell wx-config --cxxflags)
LIBS = $(shell wx-config --libs)

BUILD_DIR = build
TARGET = $(BUILD_DIR)/CPP_TEXT_RPG

SOURCES = $(shell find src -type f -name "*.cpp")
OBJECTS = $(patsubst src/%.cpp,$(BUILD_DIR)/%.o,$(SOURCES))

.PHONY: all clean run

all: $(TARGET)

$(TARGET): $(OBJECTS)
	@mkdir -p $(dir $@)
	$(CXX) $^ -o $@ $(LIBS)

$(BUILD_DIR)/%.o: src/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf $(BUILD_DIR)
