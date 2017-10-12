CXX=g++
CXXFLAGS=-Wall -ansi -pedantic
BUILD_DIR=build
OBJS=           \
                $(BUILD_DIR)/main.o \
                $(BUILD_DIR)/Weapon.o \
                $(BUILD_DIR)/WeaponFactory.o \
                $(BUILD_DIR)/CommonSword.o \
                $(BUILD_DIR)/CommonSpear.o \
		$(BUILD_DIR)/SimpleAxe.o \
                $(BUILD_DIR)/CrazyRandomSword.o \
                $(BUILD_DIR)/LegendaryTomahawk.o \

all: main.out

main.out: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(BUILD_DIR)/main.out $(OBJS)

$(BUILD_DIR)/main.o: $(BUILD_DIR) $(BUILD_DIR)/Weapon.o $(BUILD_DIR)/WeaponFactory.o
	$(CXX) $(CXXFLAGS) -c -o $@ main.cpp


$(BUILD_DIR)/WeaponFactory.o: $(BUILD_DIR) $(BUILD_DIR)/CrazyRandomSword.o $(BUILD_DIR)/LegendaryTomahawk.o $(BUILD_DIR)/SimpleAxe.o $(BUILD_DIR)/CommonSword.o $(BUILD_DIR)/CommonSpear.o WeaponFactory.cpp WeaponFactory.h
	$(CXX) $(CXXFLAGS) -c -o $@ WeaponFactory.cpp

$(BUILD_DIR)/CommonSword.o: $(BUILD_DIR) $(BUILD_DIR)/Weapon.o CommonSword.cpp CommonSword.h
	$(CXX) $(CXXFLAGS) -c -o $@ CommonSword.cpp

$(BUILD_DIR)/CommonSpear.o: $(BUILD_DIR) $(BUILD_DIR)/Weapon.o CommonSpear.cpp CommonSpear.h
	$(CXX) $(CXXFLAGS) -c -o $@ CommonSpear.cpp

$(BUILD_DIR)/SimpleAxe.o: $(BUILD_DIR) $(BUILD_DIR)/Weapon.o SimpleAxe.cpp SimpleAxe.h
	$(CXX) $(CXXFLAGS) -c -o $@ SimpleAxe.cpp

$(BUILD_DIR)/CrazyRandomSword.o: $(BUILD_DIR) $(BUILD_DIR)/Weapon.o CrazyRandomSword.cpp CrazyRandomSword.h
	$(CXX) $(CXXFLAGS) -c -o $@ CrazyRandomSword.cpp

$(BUILD_DIR)/LegendaryTomahawk.o: $(BUILD_DIR) $(BUILD_DIR)/Weapon.o LegendaryTomahawk.cpp LegendaryTomahawk.h
	$(CXX) $(CXXFLAGS) -c -o $@ LegendaryTomahawk.cpp

$(BUILD_DIR)/Weapon.o: $(BUILD_DIR) Weapon.cpp Weapon.h
	$(CXX) $(CXXFLAGS) -c -o $@ Weapon.cpp

clean:
	rm -f $(BUILD_DIR)/Weapon.o
	rm -f $(BUILD_DIR)/WeaponFactory.o
	rm -f $(BUILD_DIR)/main.o
	rm -f $(BUILD_DIR)/CommonSword.o
	rm -f $(BUILD_DIR)/CommonSpear.o
	rm -f $(BUILD_DIR)/SimpleAxe.o
	rm -f $(BUILD_DIR)/CrazyRandomSword.o
	rm -f $(BUILD_DIR)/LegendaryTomahawk.o
	rm -rf $(BUILD_DIR)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)
