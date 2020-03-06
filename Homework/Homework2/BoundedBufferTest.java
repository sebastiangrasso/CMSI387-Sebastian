public class BoundedBufferTest {

    public static void main(String[] args) {
        
        BoundedBuffer test = new BoundedBuffer();
        buff.insert("Test String");
        buff.insert(23233);
        buff.insert("Hello world");
        System.out.println(buff.retrieve());
        buff.insert(new BoundedBuffer());
        buff.insert("");
        System.out.println(buff.retrieve):
    }
}
