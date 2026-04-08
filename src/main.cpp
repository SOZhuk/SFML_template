#include <SFML/Graphics.hpp>
#include <optional>

int main() {
    sf::RenderWindow window(sf::VideoMode({800, 600}), "SFML lesson 1");
    window.setFramerateLimit(60);

    sf::CircleShape ball(40.f);
    ball.setFillColor(sf::Color::Green);
    ball.setPosition({100.f, 100.f});

    while (window.isOpen()) {
        // 1. Events
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }

        // 2. Update

        // 3. Render
        window.clear(sf::Color(30, 30, 30));
        window.draw(ball);
        window.display();
    }
}