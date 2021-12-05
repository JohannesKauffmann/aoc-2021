#include <iostream>
#include <fstream>
#include <string>

#define INPUT_FILENAME "input"

int main()
{
    std::ifstream file( INPUT_FILENAME );

    if ( !file.is_open() ) {
        std::cerr << "Failed to open input file!" << std::endl;
        return EXIT_FAILURE;
    }

    std::string currentLine;
    int increasedCount = 0;
    int previousMeasurement = 0;

    while ( file.good()) {
        std::getline( file, currentLine );
        if ( currentLine.size() == 0 )
            break;

        int currentMeasurement = std::stoi( currentLine );
        if ( currentMeasurement > previousMeasurement && /* skip the first measurement -> */ previousMeasurement != 0 )
            increasedCount++;

        previousMeasurement = currentMeasurement;
    }

    file.close();

    std::cout << "The depth measurement increased " << increasedCount << " times." << std::endl;
    return EXIT_SUCCESS;
}
