mkdir -p bin
cd src
clang++ -std=c++11 Roster.cpp Student.cpp ../main.cpp -o ../bin/class_roster
cd ..