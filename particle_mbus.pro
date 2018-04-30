SOURCES += tests/main.cpp src/MBus.cpp src/MBusFrame.cpp src/MBusDataFixed.cpp \
    src/MBusFrameData.cpp src/MBusDataInformationBlock.cpp src/MBusRecord.cpp \
    src/MBusDataRecord.cpp src/MBusValueInformationBlock.cpp \
    src/MBusDataVariable.cpp src/MBusVifTable.cpp

# QMAKE_CXXFLAGS += -Wall -Wextra -Weffc++ -Werror -Isrc -I tests/include
QMAKE_CXXFLAGS += -Wall -Wextra -Werror -Isrc -I tests/include

# gcov
QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov

# C++11
QMAKE_CXX = g++-6
QMAKE_LINK = g++-6
QMAKE_CC = gcc-6
QMAKE_CXXFLAGS += -std=c++11
