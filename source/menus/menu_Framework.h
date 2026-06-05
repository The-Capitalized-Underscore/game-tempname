#ifndef MENU_H_EXISTS
#define MENU_H_EXISTS

#pragma once
#include <string>
#include <vector>
#include <functional>

struct Option {
    std::string label;
    std::function<void()> action;
};

class Menu {
    std::string title;
    std::vector<Option> options;

public:
    Menu(const std::string& title);
    void add(const std::string& label, std::function<void()> action);
    void run() const;

private:
    void display() const;
    int getInput() const;
};

#endif
