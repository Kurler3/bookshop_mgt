
#include <iostream>
#include <vector>
#include <ctime>
#include <limits>

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

    void displayInLine()
    {
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

    void displayInLine()
    {
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

    void displayInLine()
    {
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
    int lastUserId;
    int lastBookId;
    int lastSaleId;

public:
    Management()
    {
        // Initialize books
        this->books.push_back(Book(1, "The Great Gatsby", "F. Scott Fitzgerald"));
        this->books.push_back(Book(2, "To Kill a Mockingbird", "Harper Lee"));
        this->books.push_back(Book(3, "Pride and Prejudice", "Jane Austen"));
        this->books.push_back(Book(4, "The Catcher in the Rye", "J.D. Salinger"));
        this->books.push_back(Book(5, "The Lord of the Rings", "J.R.R. Tolkien"));
        this->books.push_back(Book(6, "The Hobbit", "J.R.R. Tolkien"));
        this->books.push_back(Book(7, "The Da Vinci Code", "Dan Brown"));
        this->books.push_back(Book(8, "The Hobbit", "J.R.R. Tolkien"));
        this->books.push_back(Book(9, "The Da Vinci Code", "Dan Brown"));

        // Init some users
        this->users.push_back(User(1, "John Doe", "123 Main St", "john@example.com", 30));
        this->users.push_back(User(2, "Jane Smith", "456 Park Ave", "jane@example.com", 25));
        this->users.push_back(User(3, "Bob Johnson", "789 Elm St", "bob@example.com", 40));
        this->users.push_back(User(4, "Sarah Lee", "321 Maple Rd", "sarah@example.com", 35));
        this->users.push_back(User(5, "Mike Brown", "654 Pine St", "mike@example.com", 28));

        this->lastUserId = 5;
        this->lastBookId = 9;
        this->lastSaleId = 0;
    }

    //////////////////////////////////////////////////
    // GETTERS ///////////////////////////////////////
    //////////////////////////////////////////////////

    int getLastUserId()
    {
        return this->lastUserId;
    }

    int getLastBookId()
    {
        return this->lastBookId;
    }

    int getLastSaleId()
    {
        return this->lastSaleId;
    }

    //////////////////////////////////////////////////
    // SETTERS ///////////////////////////////////////
    //////////////////////////////////////////////////

    void setLastUserId(int lastUserId)
    {
        this->lastUserId = lastUserId;
    }

    void setLastBookId(int lastBookId)
    {
        this->lastBookId = lastBookId;
    }

    void setLastSaleId(int lastSaleId)
    {
        this->lastSaleId = lastSaleId;
    }

    //////////////////////////////////////////////////
    // METHODS ///////////////////////////////////////
    //////////////////////////////////////////////////

    void displayAllBooks()
    {
        cout << "---------------------------------\n";
        cout << "Books: id, title, author\n";
        for (int i = 0; i < this->books.size(); i++)
        {
            this->books[i].displayInLine();
        }
        cout << "---------------------------------" << endl;
    }

    void displayAllUsers()
    {
        cout << "---------------------------------\n";
        cout << "Users: id, name, email\n";

        for (int i = 0; i < this->users.size(); i++)
        {
            this->users[i].displayInLine();
        }
        cout << "---------------------------------" << endl;
    }

    void displayAllSales()
    {
        cout << "---------------------------------\n";
        cout << "Sales: id, book title, quantity, total, date\n";

        for (int i = 0; i < this->sales.size(); i++)
        {
            this->sales[i].displayInLine();
        }
        cout << "---------------------------------" << endl;
    }

    // Get user (by id)
    int getUserById() {
        cout << "---------------------------------\n";

        int id;

        cout << "Enter user ID: ";

        cin >> id;

        cout << "\n";

        for(int i = 0; i > this->users.size(); i++) {
            if(this->users[i].getId() == id) {
                this->users[i].displayDetailed();
                return i;
            }
        }
        cout << "User not found!" << endl;
        return -1;
    }

    // Add user
    void addUser()
    {
        int id = this->getLastUserId() + 1;
        string name;
        string address;
        string email;
        int age;

        cout << "---------------------------------\n";
        cout << "Create a new user: \n";

        // Flush out the input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n' ); 

        // Ask for name
        cout << "Enter name: ";
        getline(cin, name);

        // Ask for address
        cout << "Enter address: ";
        getline(cin, address);

        // Ask for email
        cout << "Enter email: ";
        cin >> email;

        // Ask for age
        cout << "Enter age: ";
        cin >> age;

        User newUser = User(
            id,
            name,
            address,
            email,
            age);

        this->setLastUserId(id);

        this->users.push_back(newUser);

        // User successfully added!
        cout << "User successfully added!" << endl;
        newUser.displayDetailed();
    }

    //TODO (use the get user by id) Delete user
    void deleteUser() {

        cout << "---------------------------------\n";

        int id;

        cout << "Enter user ID: ";

        cin >> id;

        cout << "\n";

        for (int i = 0; i < this->users.size(); i++)
        {
            if (this->users[i].getId() == id)
            {
                this->users.erase(this->users.begin() + i);
                return;
            }
        }

        cout << "User not found!" << endl;
    }

    // Update user
    void updateUser()
    {

        int userIdx = this->getUserById();

        if(userIdx == -1) {
            return;
        }

        User user = this->users[userIdx];

        // Name
        string name = user.getName();
        // Age
        int age = user.getAge();

        // Email    
        string email = user.getEmail();

        // Address
        string address = user.getAddress();

        // Loop while not chosen to stop updating
        while(true) {
            
            // Flush out the input buffer
            cin.ignore(numeric_limits<streamsize>::max(), '\n' ); 

            string choice;

            cout << "What would you like to update? (name, age, email, address) (exit to finish inputting data)";

            cin >> choice;

            if(choice == "exit") {
                break;
            } else if(choice == "name") {
                cout << "Enter new name: ";
                cin >> name;
            } else if(choice == "age") {
                cout << "Enter new age: ";
                cin >> age;
            } else if(choice == "email") {
                cout << "Enter new email: ";
                cin >> email;
            } else if(choice == "address") {
                cout << "Enter new address: ";
                cin >> address;
            } else {
                cout << "Invalid choice!" << endl;
            }
        }

        user.setAddress(address);
        user.setAge(age);
        user.setEmail(email);
        user.setName(name);
    }

    //  Get book (by id)
    void getBookById() {
        cout << "---------------------------------\n";

        int id;

        cout << "Enter book ID: ";

        cin >> id;

        cout << "\n";

        for(int i = 0; i > this->books.size(); i++) {
            if(this->books[i].getId() == id) {
                this->books[i].displayDetailed();
                return;
            }
        }
        cout << "Book not found!" << endl;
    }

    //TODO Add book
    void addBook(Book book)
    {
        this->books.push_back(book);
    }

    //TODO Delete book
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

    //TODO Update book
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
    void getSaleById() {
        cout << "---------------------------------\n";

        int id;

        cout << "Enter sale ID: ";

        cin >> id;

        cout << "\n";

        for(int i = 0; i > this->sales.size(); i++) {
            if(this->sales[i].getId() == id) {
                this->sales[i].displayDetailed();
                return;
            }
        }
        cout << "Sale not found!" << endl;
    }


    //TODO Add sale
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

    // TODO Display main menu
    void displayMainMenu()
    {
        while (true)
        {
            // Welcoming page
            cout << "Welcome to the Book Store Management System\n";
            cout << "1. Display all books\n";
            cout << "2. Display all users\n";
            cout << "3. Display all sales\n";
            cout << "4. Get user by id\n";
            cout << "5. Add a new user\n";
            cout << "6. Delete a user\n";
            cout << "7. Update a user\n";
            cout << "8. Get book by id";
            cout << "9. Add a new book\n";
            cout << "10. Delete a book\n";
            cout << "11. Update a book\n";
            cout << "12. Get sale by id";
            cout << "13. Add a new sale\n";
            cout << "14. Search for users\n";
            cout << "15. Search for books\n";
            cout << "16. Search for sales\n";
            cout << "17. Exit\n";

            // Get user input
            int choice;

            cin >> choice;

            if (choice < 1 || choice > 14)
            {
                cout << "Invalid choice. Please try again.\n";
                continue;
            }

            switch (choice)
            {
            case 1:
                this->displayAllBooks();
                break;
            case 2:
                this->displayAllUsers();
                break;
            case 3:
                this->displayAllSales();
                break;
            case 4:
                // Add a new user
                this->getUserById();
                break;
            case 5:
                // Add a user
                this->addUser();
                break;
            case 6:
                // Delete a user

                break;
            case 7:
                break;

            case 8:
                break;
            case 9:
                break;
            case 10:
                break;
            case 11:
                break;
            case 12:
                break;
            case 13:
                break;
            case 17:
                cout << "Thank you for your visit!\n";
                exit(0);
            }
        }
    }
};

int main()
{
    // Init management
    Management management = Management();
    // Call the main menu method
    management.displayMainMenu();
}