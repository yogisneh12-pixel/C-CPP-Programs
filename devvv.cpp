#include <iostream>
#include <string>
#include <curl.h>

using namespace std;

size_t WriteCallback(void* contents, size_t size, size_t nmemb, string* output)
{
    output->append((char*)contents, size * nmemb);
    return size * nmemb;
}

int main()
{
    string city = "Delhi";
    string apiKey = "YOUR_API_KEY";

    string url =
        "https://api.openweathermap.org/data/2.5/weather?q=" +
        city + "&appid=" + apiKey + "&units=metric";

    CURL* curl;
    CURLcode res;
    string response;

    curl = curl_easy_init();

    if (curl)
    {
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

        res = curl_easy_perform(curl);

        if (res == CURLE_OK)
        {
            cout << "Weather Data:\n";
            cout << response << endl;
        }
        else
        {
            cout << "Request Failed!" << endl;
        }

        curl_easy_cleanup(curl);
    }

    return 0;
}
