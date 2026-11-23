#include "Book.h"

#include <iostream>

Book::Book(
    int id,
    const std::string& title,
    const std::string& author,
    const std::string& isbn,
    int publicationYear,
    const std::string& language,
    const std::string& location,
    int numberOfPages
)

    : id(id),
      title(title),
      author(author),
      isbn(isbn),
      publicationYear(publicationYear),
      language(language),
      location(location),
      status(ReadingStatus::Unread),
      numberOfPages(numberOfPages)

{
}

int Book::getId() const {
    return id;
}

std::string Book::getTitle() const {
    return title;
}

std::string Book::getAuthor() const {
    return author;
}

ReadingStatus Book::getStatus() const {
    return status;
}

std::string Book::getIsbn() const {
    return isbn;
}

int Book::getPublicationYear() const {
    return publicationYear;
}

std::string Book::getLanguage() const {
    return language;
}

std::string Book::getPhysicalLocation() const {
    return location;
}

int Book::getNumberOfPages() const {
    return numberOfPages;
}

void Book::setStatus(ReadingStatus newStatus) {
    status = newStatus;
}

void Book::setPhysicalLocation(const std::string& newLocation) {
    location = newLocation;
}

void Book::setLanguage(const std::string& newLanguage) {
    language = newLanguage;
}

void Book::setNumberOfPages(int newNumberOfPages) {
    numberOfPages = newNumberOfPages;
}

std::string Book::statusToString(ReadingStatus status) const {

    switch (status) {

        case ReadingStatus::Unread:
            return "Unread";

        case ReadingStatus::CurrentlyReading:
            return "Currently Reading";

        case ReadingStatus::Finished:
            return "Finished";
        
        case ReadingStatus::Paused:
            return "Paused";
        
        case ReadingStatus::DidNotFinish:
            return "Did Not Finish";
    }

    return "Unknown";
}

void Book::display() const {
    std::cout << "Book ID: " << id << "\n";
    std::cout << "Title: " << title << '\n';
    std::cout << "Author: " << author << '\n';
    std::cout << "ISBN: " << isbn << '\n';
    std::cout << "Year: " << publicationYear << '\n';
    std::cout << "Language: " << language << '\n';
    std::cout << "Location: " << location << '\n';
    std::cout << "Reading status: " << statusToString(status) << '\n';
    std::cout << "Number of pages: " << numberOfPages << '\n';
}