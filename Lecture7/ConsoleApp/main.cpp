#include <iostream>
#include <thread>


struct cancellation_token
{
    bool cancellation_requested = false;
};

int main()
{
    std::shared_ptr<cancellation_token> token = std::make_shared<cancellation_token>();
    auto action = [](cancellation_token& cancellation_token)
    {
        using namespace std::chrono_literals;
        std::this_thread::sleep_for(1s);
        std::cout << cancellation_token.cancellation_requested << std::endl;
        std::cout << "dorova from thread" << std::endl;
    };
    auto thread = std::thread([](std::shared_ptr<cancellation_token> cancellation_token)
        {
            using namespace std::chrono_literals;
            while (!cancellation_token->cancellation_requested)
            {
                std::cout << cancellation_token->cancellation_requested << std::endl;
                std::cout << "dorova from thread" << std::endl;
            }
            
        }, token);

    using namespace std::chrono_literals;
    std::this_thread::sleep_for(1s);
    token->cancellation_requested = true;
    thread.join();
}