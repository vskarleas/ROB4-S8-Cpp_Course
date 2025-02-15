#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "Hello, World !" << std::endl; // standard output

    std::cerr << "Error message" << std::endl; // standard error

    std::clog << "Log message" << std::endl; // standard log

    /* NOTES */
    /* Nothing changes on the terminal print either we use cout, cerr, or clog. However,
     * - cout is buffered - output is collected and sent in larger chunks
     * - cerr is unbuffered - output is sent immediately
     * - clog is buffered like cout but for diagnostic messages
     * 
     * You can redirect these streams differently:
     * ./program > output.txt    // redirects cout
     * ./program 2> error.txt    // redirects cerr
     * ./program 2>&1            // redirects cerr to cout
     */

    return 0;
}