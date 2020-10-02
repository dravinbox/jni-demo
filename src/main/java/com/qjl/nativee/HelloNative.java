package com.qjl.nativee;

public class HelloNative {
    static {
        System.loadLibrary("helloNative");
    }
    public  native void sayHello();

    public static void main(String[] args) {
        new HelloNative().sayHello();
    }
}
