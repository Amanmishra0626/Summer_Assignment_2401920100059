interface LibraryUser{
    void registerAccount();
    void requestBook();
}

 class KidUsers implements LibraryUser{
    int age;
    String bookType;
    public void setAge(int age) {
        this.age = age;
    }
    public void setBookType(String bookType) {
        this.bookType = bookType;
    }
    @Override
    public void registerAccount() {
        if(age<12){
            System.out.println("You have successfully registered under a Kids Account");
        }
        else{
            System.out.println("Sorry, Age must be less than 12 to register as a kid");
        }
    }
    @Override
    public void requestBook() {
        if (bookType.equals("Kids")){
            System.out.println("Book Issued successfully, please return the book within 10 days");
        }
        else{
            System.out.println("Oops, you are allowed to take only kids books");
        }
    }
}

 class AdultUser implements LibraryUser{
    int age;
    String bookType;
    public void setAge(int age) {
        this.age = age;
    }
    public void setBookType(String bookType) {
        this.bookType = bookType;
    }
    @Override
    public void registerAccount() {
        if(age>=12){
            System.out.println("You have successfully registered under an Adult Account");
        }
        else{
            System.out.println("Sorry, Age must be greater than 12 to register as an adult");
        }
    }
    @Override
    public void requestBook() {
        if (bookType.equals("Fiction")){
            System.out.println("Book Issued successfully, please return the book within 7 days");
        }
        else{
            System.out.println("Oops, you are allowed to take only Fiction books");
        }
    }
}

public class LibraryInterfaceDemo{
    public static void main(String[] args) {
        System.out.println("Testcases for kids");
        KidUsers kid=new KidUsers();
        kid.setAge(10);
        kid.registerAccount();
        kid.setAge(18);
        kid.registerAccount();

        kid.setBookType("Kids");
        kid.requestBook();
        kid.setBookType("Fiction");
        kid.requestBook();

        System.out.println("\nTestcases for adults");

        AdultUser adult=new AdultUser();
        adult.setAge(5);
        adult.registerAccount();
        adult.setAge(23);
        adult.registerAccount();

        adult.setBookType("Kids");
        adult.requestBook();
        adult.setBookType("Fiction");
        adult.requestBook();
    }
}
