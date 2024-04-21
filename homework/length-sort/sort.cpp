#include "sort.hpp"
#include <algorithm>

std::deque<std::string> lengthSort(const std::forward_list<std::string>& forward_list) {
    std::deque<std::string> deque{};
    for (const auto& element : forward_list) {
        deque.emplace_back(element);
    }
    std::sort(deque.begin(), deque.end());
    std::sort(deque.begin(), deque.end(), [](std::string lhs, std::string rhs) {
        return lhs.size() < rhs.size();
    });
    return deque;
}
