
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
    double pricePerBook;

public:
    Book(int id, string title, string author, double pricePerBook)
    {
        this->id = id;
        this->title = title;
        this->author = author;
        this->pricePerBook = pricePerBook;
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

    double getPricePerBook()
    {
        return this->pricePerBook;
    }

    /////////////////////////////////////////////
    // SETTERS //////////////////////////////////
    /////////////////////////////////////////////

    void setPricePerBook(double pricePerBook)
    {
        this->pricePerBook = pricePerBook;
    }

    void setTitle(string title)
    {
        this->title = title;
    }

    void setAuthor(string author)
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
        cout << "Price Per Book: " << this->pricePerBook << "\n";
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
        this->books.push_back(Book(1, "The Great Gatsby", "F. Scott Fitzgerald", 10.00));
        this->books.push_back(Book(2, "To Kill a Mockingbird", "Harper Lee", 10.00));
        this->books.push_back(Book(3, "Pride and Prejudice", "Jane Austen", 10.00));
        this->books.push_back(Book(4, "The Catcher in the Rye", "J.D. Salinger", 10.00));
        this->books.push_back(Book(5, "The Lord of the Rings", "J.R.R. Tolkien", 10.00));
        this->books.push_back(Book(6, "The Hobbit", "J.R.R. Tolkien", 10.00));
        this->books.push_back(Book(7, "The Da Vinci Code", "Dan Brown", 10.00));
        this->books.push_back(Book(8, "The Hobbit", "J.R.R. Tolkien", 10.00));
        this->books.push_back(Book(9, "The Da Vinci Code", "Dan Brown", 10.00));

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
    int getUserById()
    {
        cout << "---------------------------------\n";

        int id;

        cout << "Enter user ID: ";

        cin >> id;

        cout << "\n";

        for (int i = 0; i < this->users.size(); i++)
        {
            if (this->users[i].getId() == id)
            {
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
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

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

    // Delete user
    void deleteUser()
    {

        int idx = getUserById();

        if (idx == -1)
        {
            return;
        }

        this->users.erase(this->users.begin() + idx);
    }

    // Update user
    void updateUser()
    {

        int userIdx = this->getUserById();

        if (userIdx == -1)
        {
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
        while (true)
        {

            string choice;
            cout << "What would you like to update? (name, age, email, address) (exit to finish inputting data) ";
            cin >> choice;

            if (choice == "exit")
            {
                break;
            }
            else if (choice == "name")
            {
                cout << "Enter new name: ";
                string newName;
                cin.ignore();
                getline(cin, newName);
                user.setName(newName);
            }
            else if (choice == "age")
            {
                cout << "Enter new age: ";
                int newAge;
                cin >> newAge;
                user.setAge(newAge);
            }
            else if (choice == "email")
            {
                cout << "Enter new email: ";
                string newEmail;
                cin >> newEmail;
                user.setEmail(newEmail);
            }
            else if (choice == "address")
            {
                cout << "Enter new address: ";
                string newAddress;
                cin.ignore();
                getline(cin, newAddress);
                user.setAddress(newAddress);
            }
            else
            {
                cout << "Invalid choice!" << endl;
            }
        }

        // Update the user in the users array
        this->users[userIdx] = user;

        cout << "User updated!" << endl;

        this->users[userIdx].displayDetailed();
    }

    //  Get book (by id)
    int getBookById()
    {
        cout << "---------------------------------\n";

        int id;

        cout << "Enter book ID: ";

        cin >> id;

        cout << "\n";

        for (int i = 0; i < this->books.size(); i++)
        {
            if (this->books[i].getId() == id)
            {
                this->books[i].displayDetailed();

                return i;
            }
        }
        cout << "Book not found!" << endl;
        return -1;
    }

    // Add book
    void addBook()
    {

        int id = this->getLastBookId() + 1;
        string title;
        string author;
        double pricePerBook;

        cout << "---------------------------------\n";
        cout << "Create a new book: \n";

        // Flush out the input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // Ask for name
        cout << "Enter title: ";
        getline(cin, title);

        // Ask for address
        cout << "Enter author: ";
        getline(cin, author);

        cout << "Enter price per book: ";
        cin >> pricePerBook;

        Book book = Book(
            id,
            title,
            author,
            pricePerBook);

        this->setLastBookId(id);

        this->books.push_back(book);

        // Book successfully added!
        cout << "Book successfully added!" << endl;
        book.displayDetailed();
    }

    // Delete book
    void deleteBook()
    {
        int idx = getBookById();

        if (idx == -1)
        {
            return;
        }

        this->books.erase(this->books.begin() + idx);
    }

    // Update book
    void updateBook()
    {
        int bookIdx = this->getBookById();

        if (bookIdx == -1)
        {
            return;
        }

        Book book = this->books[bookIdx];

        // Title
        string title = book.getTitle();
        // Author
        string author = book.getAuthor();

        double pricePerBook = book.getPricePerBook();

        // Loop while not chosen to stop updating
        while (true)
        {

            string choice;

            cout << "What would you like to update? (title, author, pricePerBook) (exit to finish inputting data) ";

            cin >> choice;

            if (choice == "exit")
            {
                break;
            }
            else if (choice == "title")
            {
                cout << "Enter new title: ";
                cin.ignore();
                getline(cin, title);
                book.setTitle(title);
            }
            else if (choice == "author")
            {
                cout << "Enter new author: ";
                cin.ignore();
                getline(cin, author);
                book.setAuthor(author);
            }
            else if (choice == "pricePerBook")
            {
                cout << "Enter new price per book: ";
                cin >> pricePerBook;
                book.setPricePerBook(pricePerBook);
            }
            else
            {
                cout << "Invalid choice!" << endl;
            }
        }


        // Update the user in the users array
        this->books[bookIdx] = book;

        cout << "Book updated!" << endl;

        this->books[bookIdx].displayDetailed();
    }

    // Get sale (by id)
    void getSaleById()
    {
        cout << "---------------------------------\n";

        int id;

        cout << "Enter sale ID: ";

        cin >> id;

        cout << "\n";

        for (int i = 0; i < this->sales.size(); i++)
        {
            if (this->sales[i].getId() == id)
            {
                this->sales[i].displayDetailed();
                return;
            }
        }
        cout << "Sale not found!" << endl;
    }

    // Add sale
    void addSale()
    {
        int id = this->getLastSaleId() + 1;

        cout << "---------------------------------\n";
        cout << "Create a new book: \n";

        int bookIdx = this->getBookById();

        if (bookIdx == -1)
        {
            return;
        }

        int bookId = this->books[bookIdx].getId();
        string bookTitle = this->books[bookIdx].getTitle();
        double pricePerBook = this->books[bookIdx].getPricePerBook();

        // Flush out the input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // Get the quantity
        int quantity;
        cout << "How many books?";
        cin >> quantity;

        // Calculate total
        double total = quantity * pricePerBook;

        Sale sale = Sale(
            id,
            bookId,
            bookTitle,
            quantity,
            pricePerBook);

        this->setLastSaleId(id);

        this->sales.push_back(sale);

        // Sale successfully added!
        cout << "Sale successfully added!" << endl;
        sale.displayDetailed();
    }

    // Search users
    void searchUsers()
    {

        // Flush out the input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string name;
        cout << "Enter a name to search for: ";
        getline(cin, name);

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
    void searchBooksByTitle()
    {

        // Flush out the input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string title;
        cout << "Enter a title to search for: ";
        getline(cin, title);

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

    void searchBooksByAuthor()
    {

        // Flush out the input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string author;
        cout << "Enter an author to search for: ";
        getline(cin, author);

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
    void searchSalesByBook()
    {

        // Flush out the input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string title;
        cout << "Enter a title to search for: ";
        getline(cin, title);

        int count = 0;
        for (int i = 0; i < this->books.size(); i++)
        {
            if (this->sales[i].getBookTitle() == title)
            {
                this->sales[i].displayInLine();
                count++;
            }
        }
        cout << "Total sales found: " << count << endl;
    }

    //  Display main menu
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
            cout << "8. Get book by id\n";
            cout << "9. Add a new book\n";
            cout << "10. Delete a book\n";
            cout << "11. Update a book\n";
            cout << "12. Get sale by id\n";
            cout << "13. Add a new sale\n";
            cout << "14. Search for users\n";
            cout << "15. Search for books\n";
            cout << "16. Search for sales\n";
            cout << "17. Exit" << endl;

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
                this->deleteUser();
                break;
            case 7:
                this->updateUser();
                break;
            case 8:
                this->getBookById();
                break;
            case 9:
                this->addBook();
                break;
            case 10:
                this->deleteBook();
                break;
            case 11:
                this->updateBook();
                break;
            case 12:
                this->getSaleById();
                break;
            case 13:
                this->addSale();
                break;
            case 14:
                this->searchUsers();
                break;
            case 15:
                this->searchBooksByTitle();
                break;
            case 16:
                this->searchSalesByBook();
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