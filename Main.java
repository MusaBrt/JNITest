public class Main {

    static {
        System.loadLibrary("native");
    }
    
    public native int[] getIntegers(int count);
    public native int sum(int a, int b);

    public void start() {
        int[] ints = getIntegers(2);
        int thesum = sum(ints[0], ints[1]);
        System.out.println(thesum);
    }

    public static void main(String[] args) {
        System.out.println("Hello World from Java!");
        new Main().start();
    }

}