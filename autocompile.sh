export JAVA_HOME=/opt/jdk-11.0.8/
gcc -fPIC -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/linux" -shared -o libnative.so native.c