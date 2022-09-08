// <class> is a user-defined type, where the default access modifier is private

//<struct> is a <class> but where the default access modifier is <public>

//<union> is a more advanced topic, you may research it if you want

let someObject = {
    dataType : 'char', // string
    character : 'c',   // char
    pos : {
        line : 1, // unsigned int
        col : 1   // unsigned int
    }
}

// TRANSLATION
//
//
//
//

class someObject
{
    std::string str = "char";
    char ch = 'c';

    unsigned int line = 1;
    unsigned int column = 1;
};

// can make subclass "pos" for ints