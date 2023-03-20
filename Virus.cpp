#include "Virus.h"

bool Virus::is_bad(Animal animal) {
    string s = animal.biggest_substr();
    size_t pos = var["RNA"].find(s);
    size_t pos2 = var["RNA"].find(mokamel(s));
    if (pos == string::npos && pos2 == string::npos)
        return false;
    return true;
}