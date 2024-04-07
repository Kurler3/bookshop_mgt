
#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

// Book class
class Book
{
private:
    int id;
    string title;
    string author;

public:
    Book(int id, string title, string author)
    {
        this->id = id;
        this->title = title;
        this->author = author;
    }

    /////////////////////////////////////////////
    // GETTERS //////////////////////////////////
    /////////////////////////////////////////////

    int getId()
    {
        return this->id;
    }

    string getTitle()
    {
        return this->title;
    }

    string getAuthor()
    {
        return this->author;
    }

    /////////////////////////////////////////////
    // SETTERS //////////////////////////////////
    /////////////////////////////////////////////

    void setTitle()
    {
        this->title = title;
    }

    void setAuthor()
    {
        this->author = author;
    }

    ////////////////////////////////////////////
    // METHODS /////////////////////////////////
    ////////////////////////////////////////////

    void displayInLine() {
        cout << this->id << " | " << this->title << " | " << this->author << endl;
    }

    void displayDetailed()
    {

        cout << "---------------------------------\n";
        cout << "ID: " << this->id << "\n";
        cout << "Title: " << this->title << "\n";
        cout << "Author: " << this->author << "\n";
        cout << "---------------------------------" << endl;
    }
};

// User class
class User
{

private:
    int id;
    string name;
    string address;
    string email;
    int age;

public:
    User(int id, string name, string address, string email, int age)
    {
        this->id = id;
        this->name = name;
        this->address = address;
        this->email = email;
        this->age = age;
    }

    /////////////////////////////////////////////
    // GETTERS //////////////////////////////////
    /////////////////////////////////////////////

    int getId()
    {
        return this->id;
    }

    string getName()
    {
        return this->name;
    }

    string getAddress()
    {
        return this->address;
    }

    string getEmail()
    {
        return this->email;
    }

    int getAge()
    {
        return this->age;
    }

    /////////////////////////////////////////////
    // SETTERS //////////////////////////////////
    /////////////////////////////////////////////

    void setName(string name)
    {
        this->name = name;
    }

    void setAddress(string address)
    {
        this->address = address;
    }
    void setEmail(string email)
    {
        this->email = email;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    ////////////////////////////////////////////
    // METHODS /////////////////////////////////
    ////////////////////////////////////////////

    void displayInLine() {
        cout << this->id << " | " << this->name << " | " << this->email << endl;
    }

    void displayDetailed()
    {

        cout << "---------------------------------\n";
        cout << "ID: " << this->id << "\n";
        cout << "Name: " << this->name << "\n";
        cout << "Email: " << this->email << "\n";
        cout << "Age: " << this->age << "\n";
        cout << "Address: " << this->address << "\n";
        cout << "---------------------------------" << endl;
    }
};

// Sales class
class Sale
{
private:
    int id;
    int bookId;
    string bookTitle;
    int quantity;
    double total;
    double pricePerBook;
    time_t saleDate;

public:
    Sale(int id, int bookId, string bookTitle, int quantity, double pricePerBook)
    {
        this->id = id;
        this->bookId = bookId;
        this->bookTitle = bookTitle;
        this->quantity = quantity;
        this->total = pricePerBook * quantity;
        this->pricePerBook = pricePerBook;
        this->saleDate = time(nullptr);
    }

    /////////////////////////////////////////////
    // GETTERS //////////////////////////////////
    /////////////////////////////////////////////

    int getId()
    {
        return this->id;
    }

    int getBookId()
    {
        return this->bookId;
    }

    string getBookTitle()
    {
        return this->bookTitle;
    }

    int getQuantity()
    {
        return this->quantity;
    }

    double getTotal()
    {
        return this->total;
    }

    double getPricePerBook()
    {
        return this->pricePerBook;
    }

    time_t getSaleDate()
    {
        return this->saleDate;
    }

    ////////////////////////////////////////////
    // METHODS /////////////////////////////////
    ////////////////////////////////////////////

    void displayInLine() {
        cout << this->id << " | " << this->bookTitle << " | " << this->quantity << " | " << this->total << " | " << this->saleDate << endl;
    }

    void displayDetailed()
    {

        cout << "---------------------------------\n";
        cout << "ID: " << this->id << "\n";
        cout << "Book Title: " << this->bookTitle << "\n";
        cout << "Quantity: " << this->quantity << "\n";
        cout << "Price Per Book: " << this->pricePerBook << "\n";
        cout << "Total: " << this->total << "\n";
        cout << "Sale Date: " << this->saleDate << "\n";
        cout << "---------------------------------" << endl;
    }
};


// Global management class
class Management
{

private:
    vector<Book> books;
    vector<User> users;
    vector<Sale> sales;

public:
    Management()
    {
        // Initialize books
        this->addBook(Book(1, "The Great Gatsby", "F. Scott Fitzgerald"));
        this->addBook(Book(2, "To Kill a Mockingbird", "Harper Lee"));
        this->addBook(Book(3, "Pride and Prejudice", "Jane Austen"));
        this->addBook(Book(4, "The Catcher in the Rye", "J.D. Salinger"));
        this->addBook(Book(5, "The Lord of the Rings", "J.R.R. Tolkien"));
        this->addBook(Book(6, "The Hobbit", "J.R.R. Tolkien"));
        this->addBook(Book(7, "The Da Vinci Code", "Dan Brown"));
        this->addBook(Book(8, "The Hobbit", "J.R.R. Tolkien"));
        this->addBook(Book(9, "The Da Vinci Code", "Dan Brown"));

        // Init some users
        this->addUser(User(1, "John Doe", "123 Main St", "john@example.com", 30));
        this->addUser(User(2, "Jane Smith", "456 Park Ave", "jane@example.com", 25));
        this->addUser(User(3, "Bob Johnson", "789 Elm St", "bob@example.com", 40));
        this->addUser(User(4, "Sarah Lee", "321 Maple Rd", "sarah@example.com", 35));
        this->addUser(User(5, "Mike Brown", "654 Pine St", "mike@example.com", 28));
    }

    //////////////////////////////////////////////////
    // GETTERS ///////////////////////////////////////
    //////////////////////////////////////////////////

    void displayAllBooks()
    {       
        cout << "---------------------------------\n";
        cout << "Books: id, title, author\n";
        for(int i = 0; i < this->books.size(); i++)
        {
            this->books[i].displayInLine();
        }
        cout << "---------------------------------" << endl;
    }

    void displayAllUsers()
    {   
        cout << "---------------------------------\n";
        cout << "Users: id, name, email\n";

        for(int i = 0; i < this->users.size(); i++)
        {
            this->users[i].displayInLine();
        }
        cout << "---------------------------------" << endl;

    }

    void displayAllSales()
    {       
        cout << "---------------------------------\n";
        cout << "Sales: id, book title, quantity, total, date\n";

        for(int i = 0; i < this->sales.size(); i++)
        {
            this->sales[i].displayInLine();
        }
        cout << "---------------------------------" << endl;
    }

    //////////////////////////////////////////////////
    // METHODS ///////////////////////////////////////
    //////////////////////////////////////////////////

    // Get user (by id)

    // Add user
    void addUser(User user)
    {
        this->users.push_back(user);
    }

    // Delete user
    void deleteUser(int userId)
    {
        for (int i = 0; i < this->users.size(); i++)
        {
            if (this->users[i].getId() == userId)
            {
                this->users.erase(this->users.begin() + i);
                break;
            }
        }
    }

    // Update user
    void updateUser(User user)
    {
        for (int i = 0; i < this->users.size(); i++)
        {
            if (this->users[i].getId() == user.getId())
            {
                this->users[i] = user;
                break;
            }
        }
    }

    // Get book (by id)

    // Add book
    void addBook(Book book)
    {
        this->books.push_back(book);
    }

    // Delete book
    void deleteBook(int bookId)
    {
        for (int i = 0; i < this->books.size(); i++)
        {
            if (this->books[i].getId() == bookId)
            {
                this->books.erase(this->books.begin() + i);
                break;
            }
        }
    }

    // Update book
    void updateBook(Book book)
    {
        for (int i = 0; i < this->books.size(); i++)
        {
            if (this->books[i].getId() == book.getId())
            {
                this->books[i] = book;
                break;
            }
        }
    }

    // Get sale (by id)

    // Add sale
    void addSale(Sale sale)
    {
        this->sales.push_back(sale);
    }

    // Search users
    void searchUsers(string name)
    {
        int count = 0;
        for (int i = 0; i < this->users.size(); i++)
        {
            if (this->users[i].getName() == name)
            {
                this->users[i].displayInLine();
                count++;
            }
        }

        cout << "Total users found: " << count << endl;
    }

    // Search books
    void searchBooksByTitle(string title)
    {
        int count = 0;
        for (int i = 0; i < this->books.size(); i++)
        {
            if (this->books[i].getTitle() == title)
            {
                this->books[i].displayInLine();
                count++;
            }
        }
        cout << "Total books found: " << count << endl;
    }

    void searchBooksByAuthor(string author)
    {

        int count = 0;
        for (int i = 0; i < this->books.size(); i++)
        {
            if (this->books[i].getTitle() == author)
            {
                this->books[i].displayInLine();
                count++;
            }
        }
        cout << "Total books found: " << count << endl;
    }

    //  Search sales
    void searchSalesByBook(
        string bookTitle)
    {
        int count = 0;
        for (int i = 0; i < this->books.size(); i++)
        {
            if (this->sales[i].getBookTitle() == bookTitle)
            {
                this->sales[i].displayInLine();
                count++;
            }
        }
        cout << "Total sales found: " << count << endl;


    }

    // TODO
    void searchSalesByDate(
        string date)
    {
    }
};


int main()
{

    // Init management
    Management management = Management();

    management.displayAllBooks();

    // Call the main menu method


}