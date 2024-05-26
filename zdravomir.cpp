#include <iostream>
#include <json/json.h>

using namespace std;
int main() {
    std::cout << "Hello, world!" << std::endl;

    //Пример с использованием библиотеки json
    std::string json_string = "{\"key\": \"value\"}";

    Json::Value root; // Создаем объект Json::Value для хранения данных JSON
    Json::CharReaderBuilder builder; // Создаем объект для считывания JSON из строки
    Json::CharReader* reader = builder.newCharReader(); // Получаем читатель JSON
    std::string errors; // Создаем строку для записи ошибок

    // Считываем JSON из строки в объект Json::Value
    bool parsingSuccessful = reader->parse(json_string.c_str(), json_string.c_str() + json_string.size(), &root, &errors);

    delete reader; // Освобождаем ресурсы читателя JSON

    if (parsingSuccessful) {
        // Выводим считанные данные на экран
        std::cout << "Key: " << root["key"].asString() << std::endl;
    } else {
        // Если возникла ошибка при считывании JSON, выводим ошибку на экран
        std::cout << "Failed to parse JSON: " << errors << std::endl;
    }
    return 0;
}

