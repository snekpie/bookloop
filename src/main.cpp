#include <iostream>
#include "Book.h"

int main() {

    Book book1(
        1,
        "The Midnight Library",
        "Matt Haig",
        "9780525559474",
        2020,
        "English",
        "Budapest",
        288
    );

book1.display();

book1.setStatus(ReadingStatus::Finished);
book1.setPhysicalLocation("Banja Luka");
book1.setLanguage("Serbian");

std::cout << "\nAfter updating reading status:\n";
book1.display();

    return 0;
}