#include <Tasks.h>



// ����� ��� ������������� �����
class Book {
public:
    std::string title;
    std::string author;
    int year;

    // ����������� �����
    Book(std::string t, std::string a, int y) : title(t), author(a), year(y) {}
};

// ����� "�������� ����������"
class HomeLibrary {
private:
    std::vector<Book> books;

public:
    // ����� ��� ���������� ����� � ����������
    void addBook(const Book& book) {
        books.push_back(book);
    }

    // ����� ��� �������� ����� �� ����������
    void removeBook(const std::string& title) {
        books.erase(std::remove_if(books.begin(), books.end(), [&](const Book& b) {
            return b.title == title;
            }), books.end());
    }

    // ����� ��� ������ ����� �� ������
    std::vector<Book> findBooksByAuthor(const std::string& author) {
        std::vector<Book> result;
        for (const Book& book : books) {
            if (book.author == author) {
                result.push_back(book);
            }
        }
        return result;
    }

    // ����� ��� ������ ����� �� ���� �������
    std::vector<Book> findBooksByYear(int year) {
        std::vector<Book> result;
        for (const Book& book : books) {
            if (book.year == year) {
                result.push_back(book);
            }
        }
        return result;
    }

    // ����� ��� ���������� ���� �� ���������, ������ ��� ���� �������
    void sortBooksByTitle() {
        std::sort(books.begin(), books.end(), [](const Book& a, const Book& b) {
            return a.title < b.title;
            });
    }

    void sortBooksByAuthor() {
        std::sort(books.begin(), books.end(), [](const Book& a, const Book& b) {
            return a.author < b.author;
            });
    }

    void sortBooksByYear() {
        std::sort(books.begin(), books.end(), [](const Book& a, const Book& b) {
            return a.year < b.year;
            });
    }
};

void Task4Function() {
    // ������ ������������� ������ "�������� ����������"
    HomeLibrary library;

    Book book1("Book1", "Author1", 2000);
    Book book2("Book2", "Author2", 1995);
    Book book3("Book3", "Author1", 2010);

    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);

    // ����� ���� �� ������
    std::vector<Book> booksByAuthor = library.findBooksByAuthor("Author1");
    for (const Book& book : booksByAuthor) {
        std::cout << "Book found by Author1: " << book.title << std::endl;
    }

    // ���������� ���� �� ���������
    library.sortBooksByTitle();
}