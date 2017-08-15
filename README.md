# MIT/BSD Redistributable License
# Author: https://github.com/infojg9
# CDesignPatterns
# Revision: 1.5


==========================

CMake configure logs:

/opt/clion-2017.1.3/bin/cmake/bin/cmake -DCMAKE_BUILD_TYPE=Debug -G "CodeBlocks - Unix Makefiles" /home/user/ClionProjects/CDesignPatterns
-- CDesignPatterns package version: 1.6
-- Boost version: 1.58.0
-- Found the following Boost libraries:
--   system
--   filesystem
-- CDesignPatterns build compiler: Unix Makefiles
-- CDesignPatterns build: ctest_test_args: PARALLEL_LEVEL;4 PARALLEL_LEVEL: 4
-- Configuring done
-- Generating done
-- Build files have been written to: /home/user/ClionProjects/CDesignPatterns/cmake-build-debug

[Finished]

====

CMake g++ compiler output:


/opt/clion-2017.1.3/bin/cmake/bin/cmake --build /home/user/ClionProjects/CDesignPatterns/cmake-build-debug --target CDesignPatterns -- -j 2
[ 20%] Building CXX object CMakeFiles/CDesignPatterns.dir/Pimple/CPointerToImplementation.cpp.o
[ 20%] Building CXX object CMakeFiles/CDesignPatterns.dir/Singleton/CSingleton.cpp.o
Using built-in specs.
Using built-in specs.
COLLECT_GCC=/usr/bin/c++
Target: x86_64-linux-gnu
Configured with: ../src/configure -v --with-pkgversion='Ubuntu 5.4.1-2ubuntu1~16.04' --with-bugurl=file:///usr/share/doc/gcc-5/README.Bugs --enable-languages=c,ada,c++,java,go,d,fortran,objc,obj-c++ --prefix=/usr --program-suffix=-5 --enable-shared --enable-linker-build-id --libexecdir=/usr/lib --without-included-gettext --enable-threads=posix --libdir=/usr/lib --enable-nls --with-sysroot=/ --enable-clocale=gnu --enable-libstdcxx-debug --enable-libstdcxx-time=yes --with-default-libstdcxx-abi=new --enable-gnu-unique-object --disable-vtable-verify --enable-libmpx --enable-plugin --with-system-zlib --disable-browser-plugin --enable-java-awt=gtk --enable-gtk-cairo --with-java-home=/usr/lib/jvm/java-1.5.0-gcj-5-amd64/jre --enable-java-home --with-jvm-root-dir=/usr/lib/jvm/java-1.5.0-gcj-5-amd64 --with-jvm-jar-dir=/usr/lib/jvm-exports/java-1.5.0-gcj-5-amd64 --with-arch-directory=amd64 --with-ecj-jar=/usr/share/java/eclipse-ecj.jar --enable-objc-gc --enable-multiarch --disable-werror --with-arch-32=i686 --with-abi=m64 --with-multilib-list=m32,m64,mx32 --enable-multilib --with-tune=generic --enable-checking=release --build=x86_64-linux-gnu --host=x86_64-linux-gnu --target=x86_64-linux-gnu
Thread model: posix
gcc version 5.4.1 20160904 (Ubuntu 5.4.1-2ubuntu1~16.04) 
COLLECT_GCC=/usr/bin/c++
Target: x86_64-linux-gnu
Configured with: ../src/configure -v --with-pkgversion='Ubuntu 5.4.1-2ubuntu1~16.04' --with-bugurl=file:///usr/share/doc/gcc-5/README.Bugs --enable-languages=c,ada,c++,java,go,d,fortran,objc,obj-c++ --prefix=/usr --program-suffix=-5 --enable-shared --enable-linker-build-id --libexecdir=/usr/lib --without-included-gettext --enable-threads=posix --libdir=/usr/lib --enable-nls --with-sysroot=/ --enable-clocale=gnu --enable-libstdcxx-debug --enable-libstdcxx-time=yes --with-default-libstdcxx-abi=new --enable-gnu-unique-object --disable-vtable-verify --enable-libmpx --enable-plugin --with-system-zlib --disable-browser-plugin --enable-java-awt=gtk --enable-gtk-cairo --with-java-home=/usr/lib/jvm/java-1.5.0-gcj-5-amd64/jre --enable-java-home --with-jvm-root-dir=/usr/lib/jvm/java-1.5.0-gcj-5-amd64 --with-jvm-jar-dir=/usr/lib/jvm-exports/java-1.5.0-gcj-5-amd64 --with-arch-directory=amd64 --with-ecj-jar=/usr/share/java/eclipse-ecj.jar --enable-objc-gc --enable-multiarch --disable-werror --with-arch-32=i686 --with-abi=m64 --with-multilib-list=m32,m64,mx32 --enable-multilib --with-tune=generic --enable-checking=release --build=x86_64-linux-gnu --host=x86_64-linux-gnu --target=x86_64-linux-gnu
Thread model: posix
gcc version 5.4.1 20160904 (Ubuntu 5.4.1-2ubuntu1~16.04) 
COLLECT_GCC_OPTIONS='-D' 'GENERIC_DELEGATE_ON' '-v' '-pipe' '-Wchkp' '-Wdouble-promotion' '-Wformat=1' '-ftest-coverage' '-fprofile-arcs' '-funroll-loops' '-g' '-Wall' '-Wextra' '-Werror' '-Wpedantic' '-O0' '-g3' '-ggdb3' '-pthread' '-std=gnu++14' '-o' 'CMakeFiles/CDesignPatterns.dir/Singleton/CSingleton.cpp.o' '-c' '-shared-libgcc' '-mtune=generic' '-march=x86-64'
COLLECT_GCC_OPTIONS='-D' 'GENERIC_DELEGATE_ON' '-v' '-pipe' '-Wchkp' '-Wdouble-promotion' '-Wformat=1' '-ftest-coverage' '-fprofile-arcs' '-funroll-loops' '-g' '-Wall' '-Wextra' '-Werror' '-Wpedantic' '-O0' '-g3' '-ggdb3' '-pthread' '-std=gnu++14' '-o' 'CMakeFiles/CDesignPatterns.dir/Pimple/CPointerToImplementation.cpp.o' '-c' '-shared-libgcc' '-mtune=generic' '-march=x86-64'
 /usr/lib/gcc/x86_64-linux-gnu/5/cc1plus -quiet -v -imultiarch x86_64-linux-gnu -dD -D_GNU_SOURCE -D_REENTRANT -D GENERIC_DELEGATE_ON /home/user/ClionProjects/CDesignPatterns/Singleton/CSingleton.cpp -quiet -dumpbase CSingleton.cpp -mtune=generic -march=x86-64 -auxbase-strip CMakeFiles/CDesignPatterns.dir/Singleton/CSingleton.cpp.o -g -g3 -ggdb3 /usr/lib/gcc/x86_64-linux-gnu/5/cc1plus -O0 -quiet -Wchkp -v -Wdouble-promotion -imultiarch -Wformat=1 x86_64-linux-gnu -Wall -dD -Wextra -D_GNU_SOURCE -Werror -D_REENTRANT -Wpedantic -D -std=gnu++14 GENERIC_DELEGATE_ON -version /home/user/ClionProjects/CDesignPatterns/Pimple/CPointerToImplementation.cpp -ftest-coverage -quiet -fprofile-arcs -dumpbase -funroll-loops CPointerToImplementation.cpp -fstack-protector-strong -mtune=generic -Wformat-security -march=x86-64 -o -auxbase-strip - CMakeFiles/CDesignPatterns.dir/Pimple/CPointerToImplementation.cpp.o | -g
 -g3 as -ggdb3 -v -O0 --64 -Wchkp -o -Wdouble-promotion CMakeFiles/CDesignPatterns.dir/Singleton/CSingleton.cpp.o -Wformat=1
 -Wall -Wextra -Werror -Wpedantic -std=gnu++14 -version -ftest-coverage -fprofile-arcs -funroll-loops -fstack-protector-strong -Wformat-security -o - |
 as -v --64 -o CMakeFiles/CDesignPatterns.dir/Pimple/CPointerToImplementation.cpp.o
GNU assembler version 2.26.1 (x86_64-linux-gnu) using BFD version (GNU Binutils for Ubuntu) 2.26.1
GNU C++14 (Ubuntu 5.4.1-2ubuntu1~16.04) version 5.4.1 20160904 (x86_64-linux-gnu)
	compiled by GNU C version 5.4.1 20160904, GNU C++14 (Ubuntu 5.4.1-2ubuntu1~16.04) version 5.4.1 20160904 (x86_64-linux-gnu)
	compiled by GNU C version 5.4.1 20160904, GMP version 6.1.0, MPFR version 3.1.4, MPC version 1.0.3
GMP version 6.1.0, MPFR version 3.1.4, MPC version 1.0.3
GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
ignoring duplicate directory "/usr/include/x86_64-linux-gnu/c++/5"
ignoring duplicate directory "/usr/include/x86_64-linux-gnu/c++/5"
ignoring nonexistent directory "/usr/local/include/x86_64-linux-gnu"
ignoring nonexistent directory "/usr/local/include/x86_64-linux-gnu"
ignoring nonexistent directory "/usr/lib/gcc/x86_64-linux-gnu/5/../../../../x86_64-linux-gnu/include"
ignoring nonexistent directory "/usr/lib/gcc/x86_64-linux-gnu/5/../../../../x86_64-linux-gnu/include"
#include "..." search starts here:
#include "..." search starts here:
#include <...> search starts here:
#include <...> search starts here:
 /usr/include/c++/5
 /usr/include/c++/5
 /usr/include/x86_64-linux-gnu/c++/5
 /usr/include/x86_64-linux-gnu/c++/5
 /usr/include/c++/5/backward
 /usr/lib/gcc/x86_64-linux-gnu/5/include
 /usr/local/include
 /usr/lib/gcc/x86_64-linux-gnu/5/include-fixed
 /usr/include/x86_64-linux-gnu
 /usr/include
End of search list.
 /usr/include/c++/5/backward
 /usr/lib/gcc/x86_64-linux-gnu/5/include
 /usr/local/include
 /usr/lib/gcc/x86_64-linux-gnu/5/include-fixed
 /usr/include/x86_64-linux-gnu
 /usr/include
End of search list.
GNU C++14 (Ubuntu 5.4.1-2ubuntu1~16.04) version 5.4.1 20160904 (x86_64-linux-gnu)
	compiled by GNU C version 5.4.1 20160904, GMP version 6.1.0, MPFR version 3.1.4, MPC version 1.0.3
GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
GNU C++14 (Ubuntu 5.4.1-2ubuntu1~16.04) version 5.4.1 20160904 (x86_64-linux-gnu)
	compiled by GNU C version 5.4.1 20160904, GMP version 6.1.0, MPFR version 3.1.4, MPC version 1.0.3
GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
GNU assembler version 2.26.1 (x86_64-linux-gnu) using BFD version (GNU Binutils for Ubuntu) 2.26.1
Compiler executable checksum: bdCompiler executable checksum: bd2b99af5e5a2b99af15cbe85e5a347f15cb8700e83409da7f8700fe09
dafe
COMPILER_PATH=/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/:/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/
LIBRARY_PATH=/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/5/../../../x86_64-linux-gnu/:/usr/lib/gcc/x86_64-linux-gnu/5/../../../../lib/:/lib/x86_64-linux-gnu/:/lib/../lib/:/usr/lib/x86_64-linux-gnu/:/usr/lib/../lib/:/usr/lib/gcc/x86_64-linux-gnu/5/../../../:/lib/:/usr/lib/
COLLECT_GCC_OPTIONS='-D' 'GENERIC_DELEGATE_ON' '-v' '-pipe' '-Wchkp' '-Wdouble-promotion' '-Wformat=1' '-ftest-coverage' '-fprofile-arcs' '-funroll-loops' '-g' '-Wall' '-Wextra' '-Werror' '-Wpedantic' '-O0' '-g3' '-ggdb3' '-pthread' '-std=gnu++14' '-o' 'CMakeFiles/CDesignPatterns.dir/Pimple/CPointerToImplementation.cpp.o' '-c' '-shared-libgcc' '-mtune=generic' '-march=x86-64'
[ 30%] Building CXX object CMakeFiles/CDesignPatterns.dir/Factory/CFactoryMaker.cpp.o
Using built-in specs.
COLLECT_GCC=/usr/bin/c++
Target: x86_64-linux-gnu
Configured with: ../src/configure -v --with-pkgversion='Ubuntu 5.4.1-2ubuntu1~16.04' --with-bugurl=file:///usr/share/doc/gcc-5/README.Bugs --enable-languages=c,ada,c++,java,go,d,fortran,objc,obj-c++ --prefix=/usr --program-suffix=-5 --enable-shared --enable-linker-build-id --libexecdir=/usr/lib --without-included-gettext --enable-threads=posix --libdir=/usr/lib --enable-nls --with-sysroot=/ --enable-clocale=gnu --enable-libstdcxx-debug --enable-libstdcxx-time=yes --with-default-libstdcxx-abi=new --enable-gnu-unique-object --disable-vtable-verify --enable-libmpx --enable-plugin --with-system-zlib --disable-browser-plugin --enable-java-awt=gtk --enable-gtk-cairo --with-java-home=/usr/lib/jvm/java-1.5.0-gcj-5-amd64/jre --enable-java-home --with-jvm-root-dir=/usr/lib/jvm/java-1.5.0-gcj-5-amd64 --with-jvm-jar-dir=/usr/lib/jvm-exports/java-1.5.0-gcj-5-amd64 --with-arch-directory=amd64 --with-ecj-jar=/usr/share/java/eclipse-ecj.jar --enable-objc-gc --enable-multiarch --disable-werror --with-arch-32=i686 --with-abi=m64 --with-multilib-list=m32,m64,mx32 --enable-multilib --with-tune=generic --enable-checking=release --build=x86_64-linux-gnu --host=x86_64-linux-gnu --target=x86_64-linux-gnu
Thread model: posix
gcc version 5.4.1 20160904 (Ubuntu 5.4.1-2ubuntu1~16.04) 
COLLECT_GCC_OPTIONS='-D' 'GENERIC_DELEGATE_ON' '-v' '-pipe' '-Wchkp' '-Wdouble-promotion' '-Wformat=1' '-ftest-coverage' '-fprofile-arcs' '-funroll-loops' '-g' '-Wall' '-Wextra' '-Werror' '-Wpedantic' '-O0' '-g3' '-ggdb3' '-pthread' '-std=gnu++14' '-o' 'CMakeFiles/CDesignPatterns.dir/Factory/CFactoryMaker.cpp.o' '-c' '-shared-libgcc' '-mtune=generic' '-march=x86-64'
 /usr/lib/gcc/x86_64-linux-gnu/5/cc1plus -quiet -v -imultiarch x86_64-linux-gnu -dD -D_GNU_SOURCE -D_REENTRANT -D GENERIC_DELEGATE_ON /home/user/ClionProjects/CDesignPatterns/Factory/CFactoryMaker.cpp -quiet -dumpbase CFactoryMaker.cpp -mtune=generic -march=x86-64 -auxbase-strip CMakeFiles/CDesignPatterns.dir/Factory/CFactoryMaker.cpp.o -g -g3 -ggdb3 -O0 -Wchkp -Wdouble-promotion -Wformat=1 -Wall -Wextra -Werror -Wpedantic -std=gnu++14 -version -ftest-coverage -fprofile-arcs -funroll-loops -fstack-protector-strong -Wformat-security -o - |
 as -v --64 -o CMakeFiles/CDesignPatterns.dir/Factory/CFactoryMaker.cpp.o
GNU C++14 (Ubuntu 5.4.1-2ubuntu1~16.04) version 5.4.1 20160904 (x86_64-linux-gnu)
	compiled by GNU C version 5.4.1 20160904, GMP version 6.1.0, MPFR version 3.1.4, MPC version 1.0.3
GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
ignoring duplicate directory "/usr/include/x86_64-linux-gnu/c++/5"
ignoring nonexistent directory "/usr/local/include/x86_64-linux-gnu"
ignoring nonexistent directory "/usr/lib/gcc/x86_64-linux-gnu/5/../../../../x86_64-linux-gnu/include"
#include "..." search starts here:
#include <...> search starts here:
 /usr/include/c++/5
 /usr/include/x86_64-linux-gnu/c++/5
 /usr/include/c++/5/backward
 /usr/lib/gcc/x86_64-linux-gnu/5/include
 /usr/local/include
 /usr/lib/gcc/x86_64-linux-gnu/5/include-fixed
 /usr/include/x86_64-linux-gnu
 /usr/include
End of search list.
GNU C++14 (Ubuntu 5.4.1-2ubuntu1~16.04) version 5.4.1 20160904 (x86_64-linux-gnu)
	compiled by GNU C version 5.4.1 20160904, GMP version 6.1.0, MPFR version 3.1.4, MPC version 1.0.3
GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
Compiler executable checksum: bd2b99af5e5a15cbe8347f870009dafe
GNU assembler version 2.26.1 (x86_64-linux-gnu) using BFD version (GNU Binutils for Ubuntu) 2.26.1
COMPILER_PATH=/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/:/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/
LIBRARY_PATH=/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/5/../../../x86_64-linux-gnu/:/usr/lib/gcc/x86_64-linux-gnu/5/../../../../lib/:/lib/x86_64-linux-gnu/:/lib/../lib/:/usr/lib/x86_64-linux-gnu/:/usr/lib/../lib/:/usr/lib/gcc/x86_64-linux-gnu/5/../../../:/lib/:/usr/lib/
COLLECT_GCC_OPTIONS='-D' 'GENERIC_DELEGATE_ON' '-v' '-pipe' '-Wchkp' '-Wdouble-promotion' '-Wformat=1' '-ftest-coverage' '-fprofile-arcs' '-funroll-loops' '-g' '-Wall' '-Wextra' '-Werror' '-Wpedantic' '-O0' '-g3' '-ggdb3' '-pthread' '-std=gnu++14' '-o' 'CMakeFiles/CDesignPatterns.dir/Singleton/CSingleton.cpp.o' '-c' '-shared-libgcc' '-mtune=generic' '-march=x86-64'
[ 40%] Building CXX object CMakeFiles/CDesignPatterns.dir/Factory/CFactoryMakerConsumer.cpp.o
Using built-in specs.
COLLECT_GCC=/usr/bin/c++
Target: x86_64-linux-gnu
Configured with: ../src/configure -v --with-pkgversion='Ubuntu 5.4.1-2ubuntu1~16.04' --with-bugurl=file:///usr/share/doc/gcc-5/README.Bugs --enable-languages=c,ada,c++,java,go,d,fortran,objc,obj-c++ --prefix=/usr --program-suffix=-5 --enable-shared --enable-linker-build-id --libexecdir=/usr/lib --without-included-gettext --enable-threads=posix --libdir=/usr/lib --enable-nls --with-sysroot=/ --enable-clocale=gnu --enable-libstdcxx-debug --enable-libstdcxx-time=yes --with-default-libstdcxx-abi=new --enable-gnu-unique-object --disable-vtable-verify --enable-libmpx --enable-plugin --with-system-zlib --disable-browser-plugin --enable-java-awt=gtk --enable-gtk-cairo --with-java-home=/usr/lib/jvm/java-1.5.0-gcj-5-amd64/jre --enable-java-home --with-jvm-root-dir=/usr/lib/jvm/java-1.5.0-gcj-5-amd64 --with-jvm-jar-dir=/usr/lib/jvm-exports/java-1.5.0-gcj-5-amd64 --with-arch-directory=amd64 --with-ecj-jar=/usr/share/java/eclipse-ecj.jar --enable-objc-gc --enable-multiarch --disable-werror --with-arch-32=i686 --with-abi=m64 --with-multilib-list=m32,m64,mx32 --enable-multilib --with-tune=generic --enable-checking=release --build=x86_64-linux-gnu --host=x86_64-linux-gnu --target=x86_64-linux-gnu
Thread model: posix
gcc version 5.4.1 20160904 (Ubuntu 5.4.1-2ubuntu1~16.04) 
COLLECT_GCC_OPTIONS='-D' 'GENERIC_DELEGATE_ON' '-v' '-pipe' '-Wchkp' '-Wdouble-promotion' '-Wformat=1' '-ftest-coverage' '-fprofile-arcs' '-funroll-loops' '-g' '-Wall' '-Wextra' '-Werror' '-Wpedantic' '-O0' '-g3' '-ggdb3' '-pthread' '-std=gnu++14' '-o' 'CMakeFiles/CDesignPatterns.dir/Factory/CFactoryMakerConsumer.cpp.o' '-c' '-shared-libgcc' '-mtune=generic' '-march=x86-64'
 /usr/lib/gcc/x86_64-linux-gnu/5/cc1plus -quiet -v -imultiarch x86_64-linux-gnu -dD -D_GNU_SOURCE -D_REENTRANT -D GENERIC_DELEGATE_ON /home/user/ClionProjects/CDesignPatterns/Factory/CFactoryMakerConsumer.cpp -quiet -dumpbase CFactoryMakerConsumer.cpp -mtune=generic -march=x86-64 -auxbase-strip CMakeFiles/CDesignPatterns.dir/Factory/CFactoryMakerConsumer.cpp.o -g -g3 -ggdb3 -O0 -Wchkp -Wdouble-promotion -Wformat=1 -Wall -Wextra -Werror -Wpedantic -std=gnu++14 -version -ftest-coverage -fprofile-arcs -funroll-loops -fstack-protector-strong -Wformat-security -o - |
 as -v --64 -o CMakeFiles/CDesignPatterns.dir/Factory/CFactoryMakerConsumer.cpp.o
GNU C++14 (Ubuntu 5.4.1-2ubuntu1~16.04) version 5.4.1 20160904 (x86_64-linux-gnu)
	compiled by GNU C version 5.4.1 20160904, GMP version 6.1.0, MPFR version 3.1.4, MPC version 1.0.3
GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
ignoring duplicate directory "/usr/include/x86_64-linux-gnu/c++/5"
ignoring nonexistent directory "/usr/local/include/x86_64-linux-gnu"
ignoring nonexistent directory "/usr/lib/gcc/x86_64-linux-gnu/5/../../../../x86_64-linux-gnu/include"
#include "..." search starts here:
#include <...> search starts here:
 /usr/include/c++/5
 /usr/include/x86_64-linux-gnu/c++/5
 /usr/include/c++/5/backward
 /usr/lib/gcc/x86_64-linux-gnu/5/include
 /usr/local/include
 /usr/lib/gcc/x86_64-linux-gnu/5/include-fixed
 /usr/include/x86_64-linux-gnu
 /usr/include
End of search list.
GNU C++14 (Ubuntu 5.4.1-2ubuntu1~16.04) version 5.4.1 20160904 (x86_64-linux-gnu)
	compiled by GNU C version 5.4.1 20160904, GMP version 6.1.0, MPFR version 3.1.4, MPC version 1.0.3
GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
GNU assembler version 2.26.1 (x86_64-linux-gnu) using BFD version (GNU Binutils for Ubuntu) 2.26.1
Compiler executable checksum: bd2b99af5e5a15cbe8347f870009dafe
COMPILER_PATH=/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/:/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/
LIBRARY_PATH=/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/5/../../../x86_64-linux-gnu/:/usr/lib/gcc/x86_64-linux-gnu/5/../../../../lib/:/lib/x86_64-linux-gnu/:/lib/../lib/:/usr/lib/x86_64-linux-gnu/:/usr/lib/../lib/:/usr/lib/gcc/x86_64-linux-gnu/5/../../../:/lib/:/usr/lib/
COLLECT_GCC_OPTIONS='-D' 'GENERIC_DELEGATE_ON' '-v' '-pipe' '-Wchkp' '-Wdouble-promotion' '-Wformat=1' '-ftest-coverage' '-fprofile-arcs' '-funroll-loops' '-g' '-Wall' '-Wextra' '-Werror' '-Wpedantic' '-O0' '-g3' '-ggdb3' '-pthread' '-std=gnu++14' '-o' 'CMakeFiles/CDesignPatterns.dir/Factory/CFactoryMakerConsumer.cpp.o' '-c' '-shared-libgcc' '-mtune=generic' '-march=x86-64'
[ 50%] Building CXX object CMakeFiles/CDesignPatterns.dir/Observer/CObserverEventGenerator.cpp.o
Using built-in specs.
COLLECT_GCC=/usr/bin/c++
Target: x86_64-linux-gnu
Configured with: ../src/configure -v --with-pkgversion='Ubuntu 5.4.1-2ubuntu1~16.04' --with-bugurl=file:///usr/share/doc/gcc-5/README.Bugs --enable-languages=c,ada,c++,java,go,d,fortran,objc,obj-c++ --prefix=/usr --program-suffix=-5 --enable-shared --enable-linker-build-id --libexecdir=/usr/lib --without-included-gettext --enable-threads=posix --libdir=/usr/lib --enable-nls --with-sysroot=/ --enable-clocale=gnu --enable-libstdcxx-debug --enable-libstdcxx-time=yes --with-default-libstdcxx-abi=new --enable-gnu-unique-object --disable-vtable-verify --enable-libmpx --enable-plugin --with-system-zlib --disable-browser-plugin --enable-java-awt=gtk --enable-gtk-cairo --with-java-home=/usr/lib/jvm/java-1.5.0-gcj-5-amd64/jre --enable-java-home --with-jvm-root-dir=/usr/lib/jvm/java-1.5.0-gcj-5-amd64 --with-jvm-jar-dir=/usr/lib/jvm-exports/java-1.5.0-gcj-5-amd64 --with-arch-directory=amd64 --with-ecj-jar=/usr/share/java/eclipse-ecj.jar --enable-objc-gc --enable-multiarch --disable-werror --with-arch-32=i686 --with-abi=m64 --with-multilib-list=m32,m64,mx32 --enable-multilib --with-tune=generic --enable-checking=release --build=x86_64-linux-gnu --host=x86_64-linux-gnu --target=x86_64-linux-gnu
Thread model: posix
gcc version 5.4.1 20160904 (Ubuntu 5.4.1-2ubuntu1~16.04) 
COLLECT_GCC_OPTIONS='-D' 'GENERIC_DELEGATE_ON' '-v' '-pipe' '-Wchkp' '-Wdouble-promotion' '-Wformat=1' '-ftest-coverage' '-fprofile-arcs' '-funroll-loops' '-g' '-Wall' '-Wextra' '-Werror' '-Wpedantic' '-O0' '-g3' '-ggdb3' '-pthread' '-std=gnu++14' '-o' 'CMakeFiles/CDesignPatterns.dir/Observer/CObserverEventGenerator.cpp.o' '-c' '-shared-libgcc' '-mtune=generic' '-march=x86-64'
 /usr/lib/gcc/x86_64-linux-gnu/5/cc1plus -quiet -v -imultiarch x86_64-linux-gnu -dD -D_GNU_SOURCE -D_REENTRANT -D GENERIC_DELEGATE_ON /home/user/ClionProjects/CDesignPatterns/Observer/CObserverEventGenerator.cpp -quiet -dumpbase CObserverEventGenerator.cpp -mtune=generic -march=x86-64 -auxbase-strip CMakeFiles/CDesignPatterns.dir/Observer/CObserverEventGenerator.cpp.o -g -g3 -ggdb3 -O0 -Wchkp -Wdouble-promotion -Wformat=1 -Wall -Wextra -Werror -Wpedantic -std=gnu++14 -version -ftest-coverage -fprofile-arcs -funroll-loops -fstack-protector-strong -Wformat-security -o - |
 as -v --64 -o CMakeFiles/CDesignPatterns.dir/Observer/CObserverEventGenerator.cpp.o
GNU assembler version 2.26.1 (x86_64-linux-gnu) using BFD version (GNU Binutils for Ubuntu) 2.26.1
GNU C++14 (Ubuntu 5.4.1-2ubuntu1~16.04) version 5.4.1 20160904 (x86_64-linux-gnu)
	compiled by GNU C version 5.4.1 20160904, GMP version 6.1.0, MPFR version 3.1.4, MPC version 1.0.3
GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
ignoring duplicate directory "/usr/include/x86_64-linux-gnu/c++/5"
ignoring nonexistent directory "/usr/local/include/x86_64-linux-gnu"
ignoring nonexistent directory "/usr/lib/gcc/x86_64-linux-gnu/5/../../../../x86_64-linux-gnu/include"
#include "..." search starts here:
#include <...> search starts here:
 /usr/include/c++/5
 /usr/include/x86_64-linux-gnu/c++/5
 /usr/include/c++/5/backward
 /usr/lib/gcc/x86_64-linux-gnu/5/include
 /usr/local/include
 /usr/lib/gcc/x86_64-linux-gnu/5/include-fixed
 /usr/include/x86_64-linux-gnu
 /usr/include
End of search list.
GNU C++14 (Ubuntu 5.4.1-2ubuntu1~16.04) version 5.4.1 20160904 (x86_64-linux-gnu)
	compiled by GNU C version 5.4.1 20160904, GMP version 6.1.0, MPFR version 3.1.4, MPC version 1.0.3
GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
Compiler executable checksum: bd2b99af5e5a15cbe8347f870009dafe
COMPILER_PATH=/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/:/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/
LIBRARY_PATH=/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/5/../../../x86_64-linux-gnu/:/usr/lib/gcc/x86_64-linux-gnu/5/../../../../lib/:/lib/x86_64-linux-gnu/:/lib/../lib/:/usr/lib/x86_64-linux-gnu/:/usr/lib/../lib/:/usr/lib/gcc/x86_64-linux-gnu/5/../../../:/lib/:/usr/lib/
COLLECT_GCC_OPTIONS='-D' 'GENERIC_DELEGATE_ON' '-v' '-pipe' '-Wchkp' '-Wdouble-promotion' '-Wformat=1' '-ftest-coverage' '-fprofile-arcs' '-funroll-loops' '-g' '-Wall' '-Wextra' '-Werror' '-Wpedantic' '-O0' '-g3' '-ggdb3' '-pthread' '-std=gnu++14' '-o' 'CMakeFiles/CDesignPatterns.dir/Factory/CFactoryMaker.cpp.o' '-c' '-shared-libgcc' '-mtune=generic' '-march=x86-64'
[ 60%] Building CXX object CMakeFiles/CDesignPatterns.dir/Observer/CObserverConsumer.cpp.o
Using built-in specs.
COLLECT_GCC=/usr/bin/c++
Target: x86_64-linux-gnu
Configured with: ../src/configure -v --with-pkgversion='Ubuntu 5.4.1-2ubuntu1~16.04' --with-bugurl=file:///usr/share/doc/gcc-5/README.Bugs --enable-languages=c,ada,c++,java,go,d,fortran,objc,obj-c++ --prefix=/usr --program-suffix=-5 --enable-shared --enable-linker-build-id --libexecdir=/usr/lib --without-included-gettext --enable-threads=posix --libdir=/usr/lib --enable-nls --with-sysroot=/ --enable-clocale=gnu --enable-libstdcxx-debug --enable-libstdcxx-time=yes --with-default-libstdcxx-abi=new --enable-gnu-unique-object --disable-vtable-verify --enable-libmpx --enable-plugin --with-system-zlib --disable-browser-plugin --enable-java-awt=gtk --enable-gtk-cairo --with-java-home=/usr/lib/jvm/java-1.5.0-gcj-5-amd64/jre --enable-java-home --with-jvm-root-dir=/usr/lib/jvm/java-1.5.0-gcj-5-amd64 --with-jvm-jar-dir=/usr/lib/jvm-exports/java-1.5.0-gcj-5-amd64 --with-arch-directory=amd64 --with-ecj-jar=/usr/share/java/eclipse-ecj.jar --enable-objc-gc --enable-multiarch --disable-werror --with-arch-32=i686 --with-abi=m64 --with-multilib-list=m32,m64,mx32 --enable-multilib --with-tune=generic --enable-checking=release --build=x86_64-linux-gnu --host=x86_64-linux-gnu --target=x86_64-linux-gnu
Thread model: posix
gcc version 5.4.1 20160904 (Ubuntu 5.4.1-2ubuntu1~16.04) 
COLLECT_GCC_OPTIONS='-D' 'GENERIC_DELEGATE_ON' '-v' '-pipe' '-Wchkp' '-Wdouble-promotion' '-Wformat=1' '-ftest-coverage' '-fprofile-arcs' '-funroll-loops' '-g' '-Wall' '-Wextra' '-Werror' '-Wpedantic' '-O0' '-g3' '-ggdb3' '-pthread' '-std=gnu++14' '-o' 'CMakeFiles/CDesignPatterns.dir/Observer/CObserverConsumer.cpp.o' '-c' '-shared-libgcc' '-mtune=generic' '-march=x86-64'
 /usr/lib/gcc/x86_64-linux-gnu/5/cc1plus -quiet -v -imultiarch x86_64-linux-gnu -dD -D_GNU_SOURCE -D_REENTRANT -D GENERIC_DELEGATE_ON /home/user/ClionProjects/CDesignPatterns/Observer/CObserverConsumer.cpp -quiet -dumpbase CObserverConsumer.cpp -mtune=generic -march=x86-64 -auxbase-strip CMakeFiles/CDesignPatterns.dir/Observer/CObserverConsumer.cpp.o -g -g3 -ggdb3 -O0 -Wchkp -Wdouble-promotion -Wformat=1 -Wall -Wextra -Werror -Wpedantic -std=gnu++14 -version -ftest-coverage -fprofile-arcs -funroll-loops -fstack-protector-strong -Wformat-security -o - |
 as -v --64 -o CMakeFiles/CDesignPatterns.dir/Observer/CObserverConsumer.cpp.o
GNU assembler version 2.26.1 (x86_64-linux-gnu) using BFD version (GNU Binutils for Ubuntu) 2.26.1
GNU C++14 (Ubuntu 5.4.1-2ubuntu1~16.04) version 5.4.1 20160904 (x86_64-linux-gnu)
	compiled by GNU C version 5.4.1 20160904, GMP version 6.1.0, MPFR version 3.1.4, MPC version 1.0.3
GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
ignoring duplicate directory "/usr/include/x86_64-linux-gnu/c++/5"
ignoring nonexistent directory "/usr/local/include/x86_64-linux-gnu"
ignoring nonexistent directory "/usr/lib/gcc/x86_64-linux-gnu/5/../../../../x86_64-linux-gnu/include"
#include "..." search starts here:
#include <...> search starts here:
 /usr/include/c++/5
 /usr/include/x86_64-linux-gnu/c++/5
 /usr/include/c++/5/backward
 /usr/lib/gcc/x86_64-linux-gnu/5/include
 /usr/local/include
 /usr/lib/gcc/x86_64-linux-gnu/5/include-fixed
 /usr/include/x86_64-linux-gnu
 /usr/include
End of search list.
GNU C++14 (Ubuntu 5.4.1-2ubuntu1~16.04) version 5.4.1 20160904 (x86_64-linux-gnu)
	compiled by GNU C version 5.4.1 20160904, GMP version 6.1.0, MPFR version 3.1.4, MPC version 1.0.3
GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
Compiler executable checksum: bd2b99af5e5a15cbe8347f870009dafe
COMPILER_PATH=/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/:/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/
LIBRARY_PATH=/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/5/../../../x86_64-linux-gnu/:/usr/lib/gcc/x86_64-linux-gnu/5/../../../../lib/:/lib/x86_64-linux-gnu/:/lib/../lib/:/usr/lib/x86_64-linux-gnu/:/usr/lib/../lib/:/usr/lib/gcc/x86_64-linux-gnu/5/../../../:/lib/:/usr/lib/
COLLECT_GCC_OPTIONS='-D' 'GENERIC_DELEGATE_ON' '-v' '-pipe' '-Wchkp' '-Wdouble-promotion' '-Wformat=1' '-ftest-coverage' '-fprofile-arcs' '-funroll-loops' '-g' '-Wall' '-Wextra' '-Werror' '-Wpedantic' '-O0' '-g3' '-ggdb3' '-pthread' '-std=gnu++14' '-o' 'CMakeFiles/CDesignPatterns.dir/Observer/CObserverConsumer.cpp.o' '-c' '-shared-libgcc' '-mtune=generic' '-march=x86-64'
[ 70%] Building CXX object CMakeFiles/CDesignPatterns.dir/Observer/CObserverEventCollector.cpp.o
Using built-in specs.
COLLECT_GCC=/usr/bin/c++
Target: x86_64-linux-gnu
Configured with: ../src/configure -v --with-pkgversion='Ubuntu 5.4.1-2ubuntu1~16.04' --with-bugurl=file:///usr/share/doc/gcc-5/README.Bugs --enable-languages=c,ada,c++,java,go,d,fortran,objc,obj-c++ --prefix=/usr --program-suffix=-5 --enable-shared --enable-linker-build-id --libexecdir=/usr/lib --without-included-gettext --enable-threads=posix --libdir=/usr/lib --enable-nls --with-sysroot=/ --enable-clocale=gnu --enable-libstdcxx-debug --enable-libstdcxx-time=yes --with-default-libstdcxx-abi=new --enable-gnu-unique-object --disable-vtable-verify --enable-libmpx --enable-plugin --with-system-zlib --disable-browser-plugin --enable-java-awt=gtk --enable-gtk-cairo --with-java-home=/usr/lib/jvm/java-1.5.0-gcj-5-amd64/jre --enable-java-home --with-jvm-root-dir=/usr/lib/jvm/java-1.5.0-gcj-5-amd64 --with-jvm-jar-dir=/usr/lib/jvm-exports/java-1.5.0-gcj-5-amd64 --with-arch-directory=amd64 --with-ecj-jar=/usr/share/java/eclipse-ecj.jar --enable-objc-gc --enable-multiarch --disable-werror --with-arch-32=i686 --with-abi=m64 --with-multilib-list=m32,m64,mx32 --enable-multilib --with-tune=generic --enable-checking=release --build=x86_64-linux-gnu --host=x86_64-linux-gnu --target=x86_64-linux-gnu
Thread model: posix
gcc version 5.4.1 20160904 (Ubuntu 5.4.1-2ubuntu1~16.04) 
COLLECT_GCC_OPTIONS='-D' 'GENERIC_DELEGATE_ON' '-v' '-pipe' '-Wchkp' '-Wdouble-promotion' '-Wformat=1' '-ftest-coverage' '-fprofile-arcs' '-funroll-loops' '-g' '-Wall' '-Wextra' '-Werror' '-Wpedantic' '-O0' '-g3' '-ggdb3' '-pthread' '-std=gnu++14' '-o' 'CMakeFiles/CDesignPatterns.dir/Observer/CObserverEventCollector.cpp.o' '-c' '-shared-libgcc' '-mtune=generic' '-march=x86-64'
 /usr/lib/gcc/x86_64-linux-gnu/5/cc1plus -quiet -v -imultiarch x86_64-linux-gnu -dD -D_GNU_SOURCE -D_REENTRANT -D GENERIC_DELEGATE_ON /home/user/ClionProjects/CDesignPatterns/Observer/CObserverEventCollector.cpp -quiet -dumpbase CObserverEventCollector.cpp -mtune=generic -march=x86-64 -auxbase-strip CMakeFiles/CDesignPatterns.dir/Observer/CObserverEventCollector.cpp.o -g -g3 -ggdb3 -O0 -Wchkp -Wdouble-promotion -Wformat=1 -Wall -Wextra -Werror -Wpedantic -std=gnu++14 -version -ftest-coverage -fprofile-arcs -funroll-loops -fstack-protector-strong -Wformat-security -o - |
 as -v --64 -o CMakeFiles/CDesignPatterns.dir/Observer/CObserverEventCollector.cpp.o
GNU assembler version 2.26.1 (x86_64-linux-gnu) using BFD version (GNU Binutils for Ubuntu) 2.26.1
GNU C++14 (Ubuntu 5.4.1-2ubuntu1~16.04) version 5.4.1 20160904 (x86_64-linux-gnu)
	compiled by GNU C version 5.4.1 20160904, GMP version 6.1.0, MPFR version 3.1.4, MPC version 1.0.3
GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
ignoring duplicate directory "/usr/include/x86_64-linux-gnu/c++/5"
ignoring nonexistent directory "/usr/local/include/x86_64-linux-gnu"
ignoring nonexistent directory "/usr/lib/gcc/x86_64-linux-gnu/5/../../../../x86_64-linux-gnu/include"
#include "..." search starts here:
#include <...> search starts here:
 /usr/include/c++/5
 /usr/include/x86_64-linux-gnu/c++/5
 /usr/include/c++/5/backward
 /usr/lib/gcc/x86_64-linux-gnu/5/include
 /usr/local/include
 /usr/lib/gcc/x86_64-linux-gnu/5/include-fixed
 /usr/include/x86_64-linux-gnu
 /usr/include
End of search list.
GNU C++14 (Ubuntu 5.4.1-2ubuntu1~16.04) version 5.4.1 20160904 (x86_64-linux-gnu)
	compiled by GNU C version 5.4.1 20160904, GMP version 6.1.0, MPFR version 3.1.4, MPC version 1.0.3
GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
Compiler executable checksum: bd2b99af5e5a15cbe8347f870009dafe
COMPILER_PATH=/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/:/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/
LIBRARY_PATH=/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/5/../../../x86_64-linux-gnu/:/usr/lib/gcc/x86_64-linux-gnu/5/../../../../lib/:/lib/x86_64-linux-gnu/:/lib/../lib/:/usr/lib/x86_64-linux-gnu/:/usr/lib/../lib/:/usr/lib/gcc/x86_64-linux-gnu/5/../../../:/lib/:/usr/lib/
COLLECT_GCC_OPTIONS='-D' 'GENERIC_DELEGATE_ON' '-v' '-pipe' '-Wchkp' '-Wdouble-promotion' '-Wformat=1' '-ftest-coverage' '-fprofile-arcs' '-funroll-loops' '-g' '-Wall' '-Wextra' '-Werror' '-Wpedantic' '-O0' '-g3' '-ggdb3' '-pthread' '-std=gnu++14' '-o' 'CMakeFiles/CDesignPatterns.dir/Observer/CObserverEventGenerator.cpp.o' '-c' '-shared-libgcc' '-mtune=generic' '-march=x86-64'
[ 80%] Building CXX object CMakeFiles/CDesignPatterns.dir/SignalSlot/CSignalSlotImpl.cpp.o
Using built-in specs.
COLLECT_GCC=/usr/bin/c++
Target: x86_64-linux-gnu
Configured with: ../src/configure -v --with-pkgversion='Ubuntu 5.4.1-2ubuntu1~16.04' --with-bugurl=file:///usr/share/doc/gcc-5/README.Bugs --enable-languages=c,ada,c++,java,go,d,fortran,objc,obj-c++ --prefix=/usr --program-suffix=-5 --enable-shared --enable-linker-build-id --libexecdir=/usr/lib --without-included-gettext --enable-threads=posix --libdir=/usr/lib --enable-nls --with-sysroot=/ --enable-clocale=gnu --enable-libstdcxx-debug --enable-libstdcxx-time=yes --with-default-libstdcxx-abi=new --enable-gnu-unique-object --disable-vtable-verify --enable-libmpx --enable-plugin --with-system-zlib --disable-browser-plugin --enable-java-awt=gtk --enable-gtk-cairo --with-java-home=/usr/lib/jvm/java-1.5.0-gcj-5-amd64/jre --enable-java-home --with-jvm-root-dir=/usr/lib/jvm/java-1.5.0-gcj-5-amd64 --with-jvm-jar-dir=/usr/lib/jvm-exports/java-1.5.0-gcj-5-amd64 --with-arch-directory=amd64 --with-ecj-jar=/usr/share/java/eclipse-ecj.jar --enable-objc-gc --enable-multiarch --disable-werror --with-arch-32=i686 --with-abi=m64 --with-multilib-list=m32,m64,mx32 --enable-multilib --with-tune=generic --enable-checking=release --build=x86_64-linux-gnu --host=x86_64-linux-gnu --target=x86_64-linux-gnu
Thread model: posix
gcc version 5.4.1 20160904 (Ubuntu 5.4.1-2ubuntu1~16.04) 
COLLECT_GCC_OPTIONS='-D' 'GENERIC_DELEGATE_ON' '-v' '-pipe' '-Wchkp' '-Wdouble-promotion' '-Wformat=1' '-ftest-coverage' '-fprofile-arcs' '-funroll-loops' '-g' '-Wall' '-Wextra' '-Werror' '-Wpedantic' '-O0' '-g3' '-ggdb3' '-pthread' '-std=gnu++14' '-o' 'CMakeFiles/CDesignPatterns.dir/SignalSlot/CSignalSlotImpl.cpp.o' '-c' '-shared-libgcc' '-mtune=generic' '-march=x86-64'
 /usr/lib/gcc/x86_64-linux-gnu/5/cc1plus -quiet -v -imultiarch x86_64-linux-gnu -dD -D_GNU_SOURCE -D_REENTRANT -D GENERIC_DELEGATE_ON /home/user/ClionProjects/CDesignPatterns/SignalSlot/CSignalSlotImpl.cpp -quiet -dumpbase CSignalSlotImpl.cpp -mtune=generic -march=x86-64 -auxbase-strip CMakeFiles/CDesignPatterns.dir/SignalSlot/CSignalSlotImpl.cpp.o -g -g3 -ggdb3 -O0 -Wchkp -Wdouble-promotion -Wformat=1 -Wall -Wextra -Werror -Wpedantic -std=gnu++14 -version -ftest-coverage -fprofile-arcs -funroll-loops -fstack-protector-strong -Wformat-security -o - |
 as -v --64 -o CMakeFiles/CDesignPatterns.dir/SignalSlot/CSignalSlotImpl.cpp.o
GNU assembler version 2.26.1 (x86_64-linux-gnu) using BFD version (GNU Binutils for Ubuntu) 2.26.1
GNU C++14 (Ubuntu 5.4.1-2ubuntu1~16.04) version 5.4.1 20160904 (x86_64-linux-gnu)
	compiled by GNU C version 5.4.1 20160904, GMP version 6.1.0, MPFR version 3.1.4, MPC version 1.0.3
GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
ignoring duplicate directory "/usr/include/x86_64-linux-gnu/c++/5"
ignoring nonexistent directory "/usr/local/include/x86_64-linux-gnu"
ignoring nonexistent directory "/usr/lib/gcc/x86_64-linux-gnu/5/../../../../x86_64-linux-gnu/include"
#include "..." search starts here:
#include <...> search starts here:
 /usr/include/c++/5
 /usr/include/x86_64-linux-gnu/c++/5
 /usr/include/c++/5/backward
 /usr/lib/gcc/x86_64-linux-gnu/5/include
 /usr/local/include
 /usr/lib/gcc/x86_64-linux-gnu/5/include-fixed
 /usr/include/x86_64-linux-gnu
 /usr/include
End of search list.
GNU C++14 (Ubuntu 5.4.1-2ubuntu1~16.04) version 5.4.1 20160904 (x86_64-linux-gnu)
	compiled by GNU C version 5.4.1 20160904, GMP version 6.1.0, MPFR version 3.1.4, MPC version 1.0.3
GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
Compiler executable checksum: bd2b99af5e5a15cbe8347f870009dafe
COMPILER_PATH=/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/:/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/
LIBRARY_PATH=/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/5/../../../x86_64-linux-gnu/:/usr/lib/gcc/x86_64-linux-gnu/5/../../../../lib/:/lib/x86_64-linux-gnu/:/lib/../lib/:/usr/lib/x86_64-linux-gnu/:/usr/lib/../lib/:/usr/lib/gcc/x86_64-linux-gnu/5/../../../:/lib/:/usr/lib/
COLLECT_GCC_OPTIONS='-D' 'GENERIC_DELEGATE_ON' '-v' '-pipe' '-Wchkp' '-Wdouble-promotion' '-Wformat=1' '-ftest-coverage' '-fprofile-arcs' '-funroll-loops' '-g' '-Wall' '-Wextra' '-Werror' '-Wpedantic' '-O0' '-g3' '-ggdb3' '-pthread' '-std=gnu++14' '-o' 'CMakeFiles/CDesignPatterns.dir/Observer/CObserverEventCollector.cpp.o' '-c' '-shared-libgcc' '-mtune=generic' '-march=x86-64'
[ 90%] Building CXX object CMakeFiles/CDesignPatterns.dir/main.cpp.o
Using built-in specs.
COLLECT_GCC=/usr/bin/c++
Target: x86_64-linux-gnu
Configured with: ../src/configure -v --with-pkgversion='Ubuntu 5.4.1-2ubuntu1~16.04' --with-bugurl=file:///usr/share/doc/gcc-5/README.Bugs --enable-languages=c,ada,c++,java,go,d,fortran,objc,obj-c++ --prefix=/usr --program-suffix=-5 --enable-shared --enable-linker-build-id --libexecdir=/usr/lib --without-included-gettext --enable-threads=posix --libdir=/usr/lib --enable-nls --with-sysroot=/ --enable-clocale=gnu --enable-libstdcxx-debug --enable-libstdcxx-time=yes --with-default-libstdcxx-abi=new --enable-gnu-unique-object --disable-vtable-verify --enable-libmpx --enable-plugin --with-system-zlib --disable-browser-plugin --enable-java-awt=gtk --enable-gtk-cairo --with-java-home=/usr/lib/jvm/java-1.5.0-gcj-5-amd64/jre --enable-java-home --with-jvm-root-dir=/usr/lib/jvm/java-1.5.0-gcj-5-amd64 --with-jvm-jar-dir=/usr/lib/jvm-exports/java-1.5.0-gcj-5-amd64 --with-arch-directory=amd64 --with-ecj-jar=/usr/share/java/eclipse-ecj.jar --enable-objc-gc --enable-multiarch --disable-werror --with-arch-32=i686 --with-abi=m64 --with-multilib-list=m32,m64,mx32 --enable-multilib --with-tune=generic --enable-checking=release --build=x86_64-linux-gnu --host=x86_64-linux-gnu --target=x86_64-linux-gnu
Thread model: posix
gcc version 5.4.1 20160904 (Ubuntu 5.4.1-2ubuntu1~16.04) 
COLLECT_GCC_OPTIONS='-D' 'GENERIC_DELEGATE_ON' '-v' '-pipe' '-Wchkp' '-Wdouble-promotion' '-Wformat=1' '-ftest-coverage' '-fprofile-arcs' '-funroll-loops' '-g' '-Wall' '-Wextra' '-Werror' '-Wpedantic' '-O0' '-g3' '-ggdb3' '-pthread' '-std=gnu++14' '-o' 'CMakeFiles/CDesignPatterns.dir/main.cpp.o' '-c' '-shared-libgcc' '-mtune=generic' '-march=x86-64'
 /usr/lib/gcc/x86_64-linux-gnu/5/cc1plus -quiet -v -imultiarch x86_64-linux-gnu -dD -D_GNU_SOURCE -D_REENTRANT -D GENERIC_DELEGATE_ON /home/user/ClionProjects/CDesignPatterns/main.cpp -quiet -dumpbase main.cpp -mtune=generic -march=x86-64 -auxbase-strip CMakeFiles/CDesignPatterns.dir/main.cpp.o -g -g3 -ggdb3 -O0 -Wchkp -Wdouble-promotion -Wformat=1 -Wall -Wextra -Werror -Wpedantic -std=gnu++14 -version -ftest-coverage -fprofile-arcs -funroll-loops -fstack-protector-strong -Wformat-security -o - |
 as -v --64 -o CMakeFiles/CDesignPatterns.dir/main.cpp.o
GNU assembler version 2.26.1 (x86_64-linux-gnu) using BFD version (GNU Binutils for Ubuntu) 2.26.1
GNU C++14 (Ubuntu 5.4.1-2ubuntu1~16.04) version 5.4.1 20160904 (x86_64-linux-gnu)
	compiled by GNU C version 5.4.1 20160904, GMP version 6.1.0, MPFR version 3.1.4, MPC version 1.0.3
GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
ignoring duplicate directory "/usr/include/x86_64-linux-gnu/c++/5"
ignoring nonexistent directory "/usr/local/include/x86_64-linux-gnu"
ignoring nonexistent directory "/usr/lib/gcc/x86_64-linux-gnu/5/../../../../x86_64-linux-gnu/include"
#include "..." search starts here:
#include <...> search starts here:
 /usr/include/c++/5
 /usr/include/x86_64-linux-gnu/c++/5
 /usr/include/c++/5/backward
 /usr/lib/gcc/x86_64-linux-gnu/5/include
 /usr/local/include
 /usr/lib/gcc/x86_64-linux-gnu/5/include-fixed
 /usr/include/x86_64-linux-gnu
 /usr/include
End of search list.
GNU C++14 (Ubuntu 5.4.1-2ubuntu1~16.04) version 5.4.1 20160904 (x86_64-linux-gnu)
	compiled by GNU C version 5.4.1 20160904, GMP version 6.1.0, MPFR version 3.1.4, MPC version 1.0.3
GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
Compiler executable checksum: bd2b99af5e5a15cbe8347f870009dafe
COMPILER_PATH=/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/:/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/
LIBRARY_PATH=/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/5/../../../x86_64-linux-gnu/:/usr/lib/gcc/x86_64-linux-gnu/5/../../../../lib/:/lib/x86_64-linux-gnu/:/lib/../lib/:/usr/lib/x86_64-linux-gnu/:/usr/lib/../lib/:/usr/lib/gcc/x86_64-linux-gnu/5/../../../:/lib/:/usr/lib/
COLLECT_GCC_OPTIONS='-D' 'GENERIC_DELEGATE_ON' '-v' '-pipe' '-Wchkp' '-Wdouble-promotion' '-Wformat=1' '-ftest-coverage' '-fprofile-arcs' '-funroll-loops' '-g' '-Wall' '-Wextra' '-Werror' '-Wpedantic' '-O0' '-g3' '-ggdb3' '-pthread' '-std=gnu++14' '-o' 'CMakeFiles/CDesignPatterns.dir/SignalSlot/CSignalSlotImpl.cpp.o' '-c' '-shared-libgcc' '-mtune=generic' '-march=x86-64'
COMPILER_PATH=/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/:/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/
LIBRARY_PATH=/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/5/../../../x86_64-linux-gnu/:/usr/lib/gcc/x86_64-linux-gnu/5/../../../../lib/:/lib/x86_64-linux-gnu/:/lib/../lib/:/usr/lib/x86_64-linux-gnu/:/usr/lib/../lib/:/usr/lib/gcc/x86_64-linux-gnu/5/../../../:/lib/:/usr/lib/
COLLECT_GCC_OPTIONS='-D' 'GENERIC_DELEGATE_ON' '-v' '-pipe' '-Wchkp' '-Wdouble-promotion' '-Wformat=1' '-ftest-coverage' '-fprofile-arcs' '-funroll-loops' '-g' '-Wall' '-Wextra' '-Werror' '-Wpedantic' '-O0' '-g3' '-ggdb3' '-pthread' '-std=gnu++14' '-o' 'CMakeFiles/CDesignPatterns.dir/main.cpp.o' '-c' '-shared-libgcc' '-mtune=generic' '-march=x86-64'
[100%] Linking CXX executable CDesignPatterns
Using built-in specs.
COLLECT_GCC=/usr/bin/c++
COLLECT_LTO_WRAPPER=/usr/lib/gcc/x86_64-linux-gnu/5/lto-wrapper
Target: x86_64-linux-gnu
Configured with: ../src/configure -v --with-pkgversion='Ubuntu 5.4.1-2ubuntu1~16.04' --with-bugurl=file:///usr/share/doc/gcc-5/README.Bugs --enable-languages=c,ada,c++,java,go,d,fortran,objc,obj-c++ --prefix=/usr --program-suffix=-5 --enable-shared --enable-linker-build-id --libexecdir=/usr/lib --without-included-gettext --enable-threads=posix --libdir=/usr/lib --enable-nls --with-sysroot=/ --enable-clocale=gnu --enable-libstdcxx-debug --enable-libstdcxx-time=yes --with-default-libstdcxx-abi=new --enable-gnu-unique-object --disable-vtable-verify --enable-libmpx --enable-plugin --with-system-zlib --disable-browser-plugin --enable-java-awt=gtk --enable-gtk-cairo --with-java-home=/usr/lib/jvm/java-1.5.0-gcj-5-amd64/jre --enable-java-home --with-jvm-root-dir=/usr/lib/jvm/java-1.5.0-gcj-5-amd64 --with-jvm-jar-dir=/usr/lib/jvm-exports/java-1.5.0-gcj-5-amd64 --with-arch-directory=amd64 --with-ecj-jar=/usr/share/java/eclipse-ecj.jar --enable-objc-gc --enable-multiarch --disable-werror --with-arch-32=i686 --with-abi=m64 --with-multilib-list=m32,m64,mx32 --enable-multilib --with-tune=generic --enable-checking=release --build=x86_64-linux-gnu --host=x86_64-linux-gnu --target=x86_64-linux-gnu
Thread model: posix
gcc version 5.4.1 20160904 (Ubuntu 5.4.1-2ubuntu1~16.04) 
COMPILER_PATH=/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/:/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/
LIBRARY_PATH=/usr/lib/gcc/x86_64-linux-gnu/5/:/usr/lib/gcc/x86_64-linux-gnu/5/../../../x86_64-linux-gnu/:/usr/lib/gcc/x86_64-linux-gnu/5/../../../../lib/:/lib/x86_64-linux-gnu/:/lib/../lib/:/usr/lib/x86_64-linux-gnu/:/usr/lib/../lib/:/usr/lib/gcc/x86_64-linux-gnu/5/../../../:/lib/:/usr/lib/
COLLECT_GCC_OPTIONS='-v' '-pipe' '-Wchkp' '-Wdouble-promotion' '-Wformat=1' '-ftest-coverage' '-fprofile-arcs' '-funroll-loops' '-g' '-rdynamic' '-o' 'CDesignPatterns' '-pthread' '-shared-libgcc' '-mtune=generic' '-march=x86-64'
 /usr/lib/gcc/x86_64-linux-gnu/5/collect2 -plugin /usr/lib/gcc/x86_64-linux-gnu/5/liblto_plugin.so -plugin-opt=/usr/lib/gcc/x86_64-linux-gnu/5/lto-wrapper -plugin-opt=-fresolution=/tmp/cc7jz32b.res -plugin-opt=-pass-through=-lgcc_s -plugin-opt=-pass-through=-lgcc -plugin-opt=-pass-through=-lpthread -plugin-opt=-pass-through=-lc -plugin-opt=-pass-through=-lgcc_s -plugin-opt=-pass-through=-lgcc --sysroot=/ --build-id --eh-frame-hdr -m elf_x86_64 --hash-style=gnu --as-needed -export-dynamic -dynamic-linker /lib64/ld-linux-x86-64.so.2 -z relro -o CDesignPatterns /usr/lib/gcc/x86_64-linux-gnu/5/../../../x86_64-linux-gnu/crt1.o /usr/lib/gcc/x86_64-linux-gnu/5/../../../x86_64-linux-gnu/crti.o /usr/lib/gcc/x86_64-linux-gnu/5/crtbegin.o -L/usr/lib/gcc/x86_64-linux-gnu/5 -L/usr/lib/gcc/x86_64-linux-gnu/5/../../../x86_64-linux-gnu -L/usr/lib/gcc/x86_64-linux-gnu/5/../../../../lib -L/lib/x86_64-linux-gnu -L/lib/../lib -L/usr/lib/x86_64-linux-gnu -L/usr/lib/../lib -L/usr/lib/gcc/x86_64-linux-gnu/5/../../.. CMakeFiles/CDesignPatterns.dir/Pimple/CPointerToImplementation.cpp.o CMakeFiles/CDesignPatterns.dir/Singleton/CSingleton.cpp.o CMakeFiles/CDesignPatterns.dir/Factory/CFactoryMaker.cpp.o CMakeFiles/CDesignPatterns.dir/Factory/CFactoryMakerConsumer.cpp.o CMakeFiles/CDesignPatterns.dir/Observer/CObserverEventGenerator.cpp.o CMakeFiles/CDesignPatterns.dir/Observer/CObserverConsumer.cpp.o CMakeFiles/CDesignPatterns.dir/Observer/CObserverEventCollector.cpp.o CMakeFiles/CDesignPatterns.dir/SignalSlot/CSignalSlotImpl.cpp.o CMakeFiles/CDesignPatterns.dir/main.cpp.o -Bstatic -lboost_system -lboost_filesystem -Bdynamic -lstdc++ -lm -lgcov -lgcc_s -lgcc -lpthread -lc -lgcc_s -lgcc /usr/lib/gcc/x86_64-linux-gnu/5/crtend.o /usr/lib/gcc/x86_64-linux-gnu/5/../../../x86_64-linux-gnu/crtn.o
[100%] Built target CDesignPatterns



=========

Execution output:


/home/user/ClionProjects/CDesignPatterns/cmake-build-debug/CDesignPatterns
main ThreadId: 139871291172672, Priority: 0, Policy: 0
t1 ThreadId: 139871273899776, Priority: 0, Policy: 0
t2 ThreadId: 139871265507072, Priority: 0, Policy: 0
boost::typeindex Type: unsigned int
boost::typeindex param: unsigned int const&

Called by Thread Id: 139871273899776
boost::typeindex Type: unsigned int
boost::typeindex param: unsigned int const&
ThreadId: 139871265507072 executing at priority 20
ThreadId: 139871265507072 executing at priority 20

Called by Thread Id: 139871265507072
OpenGL Render
OpenGL Render
DirectX renderer unregistered
Notify Event1:
observer1: Received message: 0
observer2: Received message: 0
Notify Event3:
observer1: Received message: 2
observer3: Received message: 2

User2eventCollector(): received: Message 1: Request

User1eventCollector(): received: Message 1: Reply
Exiting...
PimpleTestObject1: consumed : 0.000832796 secs

Process finished with exit code 0
