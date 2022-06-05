// An ADT is implemented by supplying

// a data structure for the type name.

// coded algorithms for the operations.

/ A triangle ADT.
struct Triangle {
  double side1;
  double side2;
  double angle;
};


class Book {
 public:
    ⋮
 private:
  std::string title;
  int numAuthors;
  std::string isbn;
  Publisher publisher;

  static const int maxAuthors = 12;
  Author* authors;  // array of Authors
};

// Concrete Data Type (CDT),