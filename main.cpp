#include <unistd.h>
#include <iostream>

#include "NLPIR.h"

int main(int argc, char** argv) {
	std::string NLPIR_DATA_DIR;
	std::string input;
	char c;
	while ( (c = getopt(argc, argv, "d:i:h") ) != -1) {
		switch(c) {
			case 'd':
				NLPIR_DATA_DIR = optarg;
				break;
			case 'i':
				input = optarg;
				break;
			case '?':
			case 'h':
				std::cout << "Usage> " << argv[0] << " -d dict_path " << std::endl;
				break;
		}
	}
	// Step 1: init
	if (!NLPIR_Init(NLPIR_DATA_DIR.c_str(), UTF8_CODE)) {
		std::cout << "NLPIR_Init Failed: [" << NLPIR_DATA_DIR << "]"  << std::endl;
		return 0;
	}

	if (!input.size())
		for (std::string line; std::getline(std::cin, line);) 
			input += line;

	// Step 2: proccessing
	std::string result = ICTCLAS_ParagraphProcess(input.c_str());
	std::cout << "Result: #" << result << "#" << std::endl;

	NLPIR_Exit();
	return 0;
}
