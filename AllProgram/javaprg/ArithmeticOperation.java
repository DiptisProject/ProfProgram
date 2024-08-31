class ArithmeticOperation 
{
    public static void main(String[] args) 
	{
        int sum = 0;
        int sub = 0; // Initialize sub with zero
        int mul = 1;
        double div = Double.parseDouble(args[0]);

        for (int i = 0; i < args.length; i++) {
            int n = Integer.parseInt(args[i]);
            sum += n;
            sub -= n; // Subtract each argument from sub
            mul *= n;
            if (i > 0) {
                div /= n;
            }
        }

        System.out.println("Addition: " + sum);
        System.out.println("Subtraction: " + sub);
        System.out.println("Multiplication: " + mul);
        System.out.println("Division: " + div);
    }
}
