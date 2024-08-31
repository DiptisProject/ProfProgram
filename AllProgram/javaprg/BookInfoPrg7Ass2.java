class BookInfoPrg7Ass2
{
   public static void createBook(BookPrg7Ass2 book, String title, double price)
   {
        // Set the book information using the setter methods
        book.setBookTitle(title);
        book.setBookPrice(price);
    }

    public static void showBook(BookPrg7Ass2 book) {
        // Display the book information using the getter methods
        System.out.println("Book Title: " + book.getBookTitle());
        System.out.println("Book Price: $" + book.getBookPrice());
    }
}