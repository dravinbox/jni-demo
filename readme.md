# JNI demo

## 生成头文件
```bash
cd src/main/java
javac com/qjl/nativee/HelloNative.java 
javah com.qjl.nativee.HelloNative
```
此时在java目录下生成了 com_qjl_nativee_HelloNative.h

## 编写c代码构建动态链接库
```bash
cd src/main
#创建目录
mkdir c
#把h文件拷贝到 c/ 目录中
cp src/main/java/com_qjl_nativee_HelloNative.h src/main/c/
#新建文件
cd src/main/c
touch com_qjl_nativee_HelloNative.c
#编写好c文件后
#编译构建动态链接库 名字叫libxxx.so,java中加载名字xxx
gcc -m64 -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/linux" -shared -o libhelloNative.so com_qjl_nativee_HelloNative.c
```

## 编译运行java程序

```bash
cd src/main/java
javac com/qjl/nativee/HelloNative.java 
java -Djava.library.path=../c com.qjl.nativee.HelloNative
```