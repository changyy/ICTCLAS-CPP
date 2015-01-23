# ICTCLAS-CPP
```
$ mkdir build
$ cd build
$ cmake ..
$ make
Scanning dependencies of target PREPARE_ICTCLAS2015
[ 50%] GET ICTCLA2015
[ 50%] Built target PREPARE_ICTCLAS2015
Scanning dependencies of target content-analysis
[100%] Building CXX object CMakeFiles/content-analysis.dir/main.cpp.o
Linking CXX executable content-analysis
[100%] Built target content-analysis
$ ./content-analysis -i "你好嗎 Hello World"
Result: #你好/vl 嗎/n   Hello/n   World/n #
```
