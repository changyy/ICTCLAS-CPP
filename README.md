# Env Info
```
$ sudo apt install unzip git g++ cmake make

$ lsb_release -a
No LSB modules are available.
Distributor ID:	Ubuntu
Description:	Ubuntu 16.04.2 LTS
Release:	16.04
Codename:	xenial

$ g++ -v
Using built-in specs.
COLLECT_GCC=g++
COLLECT_LTO_WRAPPER=/usr/lib/gcc/x86_64-linux-gnu/5/lto-wrapper
Target: x86_64-linux-gnu
Configured with: ../src/configure -v --with-pkgversion='Ubuntu 5.4.0-6ubuntu1~16.04.4' --with-bugurl=file:///usr/share/doc/gcc-5/README.Bugs --enable-languages=c,ada,c++,java,go,d,fortran,objc,obj-c++ --prefix=/usr --program-suffix=-5 --enable-shared --enable-linker-build-id --libexecdir=/usr/lib --without-included-gettext --enable-threads=posix --libdir=/usr/lib --enable-nls --with-sysroot=/ --enable-clocale=gnu --enable-libstdcxx-debug --enable-libstdcxx-time=yes --with-default-libstdcxx-abi=new --enable-gnu-unique-object --disable-vtable-verify --enable-libmpx --enable-plugin --with-system-zlib --disable-browser-plugin --enable-java-awt=gtk --enable-gtk-cairo --with-java-home=/usr/lib/jvm/java-1.5.0-gcj-5-amd64/jre --enable-java-home --with-jvm-root-dir=/usr/lib/jvm/java-1.5.0-gcj-5-amd64 --with-jvm-jar-dir=/usr/lib/jvm-exports/java-1.5.0-gcj-5-amd64 --with-arch-directory=amd64 --with-ecj-jar=/usr/share/java/eclipse-ecj.jar --enable-objc-gc --enable-multiarch --disable-werror --with-arch-32=i686 --with-abi=m64 --with-multilib-list=m32,m64,mx32 --enable-multilib --with-tune=generic --enable-checking=release --build=x86_64-linux-gnu --host=x86_64-linux-gnu --target=x86_64-linux-gnu
Thread model: posix
gcc version 5.4.0 20160609 (Ubuntu 5.4.0-6ubuntu1~16.04.4) 

```
# Usage

You should check the lastest source code link at: http://ictclas.nlpir.org/downloads
And change the path at CMakeLists.txt to fetch the code:

Link:

  http://ictclas.nlpir.org/upload/20170314140452_ICTCLAS2016%E5%88%86%E8%AF%8D%E7%B3%BB%E7%BB%9F%E4%B8%8B%E8%BD%BD%E5%8C%85.zip

Filename: 

  20170314140452_ICTCLAS2016%E5%88%86%E8%AF%8D%E7%B3%BB%E7%BB%9F%E4%B8%8B%E8%BD%BD%E5%8C%85.zip

Action:

  set(TOOL_ICTCLAS_TARGET_SOURCE "20170314140452_ICTCLAS2016%E5%88%86%E8%AF%8D%E7%B3%BB%E7%BB%9F%E4%B8%8B%E8%BD%BD%E5%8C%85.zip")

At this moment, you also need to get the license from github: https://github.com/NLPIR-team/NLPIR/tree/master/License
And copy all files to build/Data

```
$ mkdir build
$ cd build
$ cmake ..
$ make
Scanning dependencies of target PREPARE_ICTCLAS
[ 33%] GET ICTCLA
[ 33%] Built target PREPARE_ICTCLAS
Scanning dependencies of target content-analysis
[ 66%] Building CXX object CMakeFiles/content-analysis.dir/main.cpp.o
[100%] Linking CXX executable content-analysis
[100%] Built target content-analysis
$ ls
CMakeCache.txt  CMakeFiles  cmake_install.cmake  content-analysis  Data  include  libNLPIR.so  Makefile
$ ./content-analysis -i "你好嗎 Hello World"
NLPIR_Init Failed: []
$ cd ~/
$ git clone https://github.com/NLPIR-team/NLPIR
$ find NLPIR/License/license\ for\ a\ month/ -type f
NLPIR/License/license for a month/NLPIR-ICTCLAS分词系统授权/NLPIR.user
NLPIR/License/license for a month/cluster聚类授权/cluster.user
NLPIR/License/license for a month/NewWordFinder新词发现授权/NewWordFinder.user
NLPIR/License/license for a month/Summary自动摘要提取授权/summary.user
NLPIR/License/license for a month/KeyExtract关键词提取授权/keyExtract.user
NLPIR/License/license for a month/HtmlParser网页正文提取授权/LJHtmlParser.user
NLPIR/License/license for a month/JZSearch精准搜索引擎授权/JZSearch.user
NLPIR/License/license for a month/Sentiment情感分析授权/sentiment.user
NLPIR/License/license for a month/classifier规则分类授权/classifier.user
NLPIR/License/license for a month/DocExtractor文档提取授权/DocExtractor.user
NLPIR/License/license for a month/classifier深度学习分类授权/deepclassifier.user
NLPIR/License/license for a month/LJKeyScanner关键词扫描授权/keyScan.user
NLPIR/License/license for a month/RedupRemover去重授权/LJRedupRemover.user
$ find ~/NLPIR/License/license\ for\ a\ month/ -type f -exec cp {} ~/ICTCLAS-CPP/build/Data/ \;
$ cd ~/ICTCLAS-CPP/build/
$ ./content-analysis -i "你好嗎 Hello World"
Result: #你好/vl 嗎/n   Hello/n   World/n #
```
