template <typename T> int compare(const T &v1, const T &v2) {
    if (v1 < v2)
        return -1;
    if (v2 < v1)
        return 1;
    return 0;
}

int main(int argc, char *argv[]) {
    // long lng;
    // compare(lng, 1024); // error: cannot instantiate compare(long, int)
    return 0; //
}