public class first {
void display() {
	System.out.println("Hi");
}
public static void main(String[] args)
	{
		first f=new second();
		f.display();
	}

}

class second extends first{
	void display()
	{
		System.out.println("hello");
	}
}