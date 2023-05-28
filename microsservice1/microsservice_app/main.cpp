#include <iostream>

#include "spdlog/spdlog.h"
#include "spdlog/sinks/basic_file_sink.h"


void logfileWrite(std::string conteudo)
{
    try 
    {
        auto logger = spdlog::basic_logger_mt("basic_logger", "logs/basic-log.txt");
        logger->info(conteudo);
    }
    catch (const spdlog::spdlog_ex &ex)
    {
        std::cout << "Log init failed: " << ex.what() << std::endl;
    }
}


int main(){

    int number1 = 5;
    std::cout << "DEBUG: number " << number1 << std::endl;
    //logfileWrite(char(number1));
    //logfileWrite(static_cast<char>(number1));
    logfileWrite(std::to_string(number1));
}


