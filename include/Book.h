#ifndef BOOK_H
#define BOOK_H

#include <string>

enum class ReadingStatus {
    Unread,
    CurrentlyReading,
    Finished,
    Paused,
    DidNotFinish
};

class Book {
private:
    int id;
    std::string title;
    std::string author;
    std::string isbn;
    int publicationYear;
    std::string language;
    std::string location;
    ReadingStatus status;

public:
    Book(
        int id,
        const std::string& title,
        const std::string& author,
        const std::string& isbn,
        int publicationYear,
        const std::string& language,
        const std::string& location
    );

    // ========== GET functions ========= //

    // get ID of a book
    int getId() const;

    // get title of a book
    std::string getTitle() const;
    
    // get author of a book
    std::string getAuthor() const;

    // get reading status of a book
    ReadingStatus getStatus() const;

    // get ISBN of a book
    std::string getIsbn() const;

    // get publication year of a book
    int getPublicationYear() const;

    // get language of a book
    std::string getLanguage() const;

    // get physical location of a book
    std::string getPhysicalLocation() const;

    // ========== SET functions ========= //

    // set reading status
    void setStatus(ReadingStatus newStatus);

    // set physical location
    void setPhysicalLocation(const std::string& newLocation);

    // set language
    void setLanguage(const std::string& newLanguage);

    // convert ReadingStatus to string
    std::string statusToString(ReadingStatus status) const;

    void display() const;
};

#endif // BOOK_H